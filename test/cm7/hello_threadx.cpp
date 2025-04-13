#include <stdio.h>
#include <stdint.h>
#include "tx_api.h"
#include "ftl/mutex.hpp"
#include "ftl/thread.hpp"

#define STACK_SIZE 4096 // Increased to avoid stack overflow

// Stack memory for threads
alignas(8) uint8_t thread_1_stack[STACK_SIZE];
alignas(8) uint8_t thread_2_stack[STACK_SIZE];

// Shared mutex
ftl::mutex shared_mutex;

// Thread entry functions
void thread_1_entry(void*) {
    printf("Thread 1: Starting\n");
    while (1) {
        {
            ftl::lock_guard<ftl::mutex> lock(shared_mutex);
            printf("Thread 1: Hi\n");
            tx_thread_sleep(50);
            printf("Thread 1: Done\n");
        }
        tx_thread_sleep(100);
    }
}

void thread_2_entry(void*) {
    printf("Thread 2: Starting\n");
    while (1) {
        {
            ftl::lock_guard<ftl::mutex> lock(shared_mutex);
            printf("Thread 2: Hello\n");
            tx_thread_sleep(75);
            printf("Thread 2: Finished\n");
        }
        tx_thread_sleep(150);
    }
}

extern "C" void tx_application_define(void*) {
    static ftl::thread thread_1(
        "Thread 1",
        thread_1_entry,
        nullptr,
        thread_1_stack,
        STACK_SIZE,
        1,
        1,
        TX_NO_TIME_SLICE,
        TX_AUTO_START
    );

    static ftl::thread thread_2(
        "Thread 2",
        thread_2_entry,
        nullptr,
        thread_2_stack,
        STACK_SIZE,
        2,
        2,
        TX_NO_TIME_SLICE,
        TX_AUTO_START
    );
}

int main() {
    tx_kernel_enter();
    return 0;
}
