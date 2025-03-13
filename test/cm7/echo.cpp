#include "platform/lpuart.hpp"

int main(void) {
    Lpuart1 lpuart;    
    const char* header = "MIMXRT1170 UART String Echo Test\r\n";
    lpuart.write(reinterpret_cast<const uint8_t*>(header), std::strlen(header));
    char rx_buffer[100];

    while (1) {
        const char* request_message = "Type something: ";
        lpuart.write(reinterpret_cast<const uint8_t*>(request_message), std::strlen(request_message));
        lpuart.read(reinterpret_cast<uint8_t*>(rx_buffer), sizeof(rx_buffer));
        
        lpuart.write(reinterpret_cast<const uint8_t*>("\r\n"), std::strlen("\r\n"));
        lpuart.write(reinterpret_cast<const uint8_t*>("You typed: "), std::strlen("You typed: "));
        lpuart.write(reinterpret_cast<uint8_t*>(rx_buffer), std::strlen(rx_buffer));
        lpuart.write(reinterpret_cast<const uint8_t*>("\r\n"), std::strlen("\r\n"));
    }
}
