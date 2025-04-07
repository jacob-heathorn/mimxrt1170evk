#include <stdio.h>
#include <stdint.h>
#include "tx_api.h"

// Define thread stacks and mutex
#define STACK_SIZE 1024
TX_THREAD thread_1;
TX_THREAD thread_2;
uint8_t thread_1_stack[STACK_SIZE];
uint8_t thread_2_stack[STACK_SIZE];
TX_MUTEX shared_mutex;

// Shared resource (simulated with printf)
void thread_1_entry(ULONG thread_input) {
    while (1) {
        // Acquire the mutex
        UINT status = tx_mutex_get(&shared_mutex, TX_WAIT_FOREVER);
        if (status == TX_SUCCESS) {
            printf("\r\nThread 1: Hi from thread 1\r\n");
            // Simulate some work in the critical section
            tx_thread_sleep(50); // 0.5 seconds at 100 Hz
            printf("Thread 1: Done\r\n");
            tx_mutex_put(&shared_mutex);
        } else {
            printf("Thread 1: Mutex error %u\r\n", status);
        }
        // Sleep outside critical section
        tx_thread_sleep(100); // 1 second
    }
}

void thread_2_entry(ULONG thread_input) {
    while (1) {
        // Acquire the mutex
        UINT status = tx_mutex_get(&shared_mutex, TX_WAIT_FOREVER);
        if (status == TX_SUCCESS) {
            printf("\r\nThread 2: Hello from thread 2\r\n");
            // Simulate some work in the critical section
            tx_thread_sleep(75); // 0.75 seconds at 100 Hz
            printf("Thread 2: Finished\r\n");
            tx_mutex_put(&shared_mutex);
        } else {
            printf("Thread 2: Mutex error %u\r\n", status);
        }
        // Sleep outside critical section
        tx_thread_sleep(150); // 1.5 seconds
    }
}

extern "C" void tx_application_define(void *unused) {
    // Create the mutex
    UINT status = tx_mutex_create(&shared_mutex, "Shared Mutex", TX_NO_INHERIT);
    if (status != TX_SUCCESS) {
        printf("Mutex creation failed: %u\r\n", status);
        return;
    }

    // Create Thread 1
    status = tx_thread_create(&thread_1, "Thread 1", thread_1_entry,
                              0, thread_1_stack, STACK_SIZE,
                              1, 1, TX_NO_TIME_SLICE, TX_AUTO_START);
    if (status != TX_SUCCESS) {
        printf("Thread 1 creation failed: %u\r\n", status);
        return;
    }

    // Create Thread 2
    status = tx_thread_create(&thread_2, "Thread 2", thread_2_entry,
                              0, thread_2_stack, STACK_SIZE,
                              2, 2, TX_NO_TIME_SLICE, TX_AUTO_START);
    if (status != TX_SUCCESS) {
        printf("Thread 2 creation failed: %u\r\n", status);
        return;
    }
}

int main() {
    tx_kernel_enter(); // Transfers control to ThreadX
    return 0;
}
