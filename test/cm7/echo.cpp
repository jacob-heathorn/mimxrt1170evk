#include "platform/lpuart.hpp"


int main(void) {  
    const char* header = "\r\nMIMXRT1170 UART String Echo Test\r\n";
    printf("%s", header);
    
    char rx_buffer[100];
    while (1) {
        printf("%s", "Type something: ");
        scanf("%s", rx_buffer);
        printf("\r\nYou typed: %s\r\n", rx_buffer);
    }
}
