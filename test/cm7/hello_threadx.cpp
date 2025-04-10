// main.cpp
#include <stdio.h>
#include <stdint.h>
#include "tx_api.h"
#include "mutex.hpp"

#define STACK_SIZE 1024
TX_THREAD thread_1, thread_2;
uint8_t thread_1_stack[STACK_SIZE], thread_2_stack[STACK_SIZE];
ftl::mutex shared_mutex;

void thread_1_entry(ULONG) {
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

void thread_2_entry(ULONG) {
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
    tx_thread_create(&thread_1, "Thread 1", thread_1_entry, 0, thread_1_stack, STACK_SIZE, 1, 1, TX_NO_TIME_SLICE, TX_AUTO_START);
    tx_thread_create(&thread_2, "Thread 2", thread_2_entry, 0, thread_2_stack, STACK_SIZE, 2, 2, TX_NO_TIME_SLICE, TX_AUTO_START);
}

int main() {
    tx_kernel_enter();
    return 0;
}
