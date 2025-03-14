#include "platform/lpuart.hpp"
#include "etl/singleton.h"

class MySingleton : public etl::singleton<MySingleton> {
    friend class etl::singleton<MySingleton>; // Required to allow singleton base to access constructor

public:
    void DoSomething() {
        std::printf("ETL Singleton is working!\n");
    }

private:
    // Remove constructor definition, let the base class handle instantiation
    MySingleton() = default;
};

int main(void) {
    MySingleton::instance().DoSomething();
    printf("\r\nMIMXRT1170 UART String Echo Test\r\n");
    
    char rx_buffer[100];
    while (1) {
        printf("Type something: ");
        scanf("%s", rx_buffer);
        printf("\r\nYou typed: %s\r\n", rx_buffer);
    }
}
