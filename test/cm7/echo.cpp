#include "platform/console_uart.hpp"


int main(void) {
    printf("\r\nMIMXRT1170 UART String Echo Test\r\n");
    
    char rx_buffer[100];
    while (1) {
        printf("Type something: ");
        scanf("%s", rx_buffer);
        printf("\r\nYou typed: %s\r\n", rx_buffer);
    }
}
