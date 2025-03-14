#include <sys/stat.h>
#include <errno.h>
#include "platform/lpuart.hpp"

// Lpuart1 lpuart;

extern "C" {
    int _write(int fd, const char* ptr, int len) {
        (void)fd;  // Ignore file descriptor

        Lpuart1::instance().write(reinterpret_cast<const uint8_t*>(ptr), len);

        // for (int i = 0; i < len; i++) {
        //     DbgConsole_Putchar(ptr[i]);  // Replace with your board’s UART function
        // }
        return len;
    }

    int _read(int fd, char* ptr, int len) {
        (void)fd;  // Ignore file descriptor
        *ptr = Lpuart1::instance().read_byte();
        
        // Convert \r to \n for the expected stop condition.
        if (*ptr == '\r' || *ptr == '\n')
        {
            *ptr = '\n';
        }
        return 1;
    }

    int _close(int fd) {
        (void)fd;
        return -1;
    }

    int _fstat(int fd, struct stat* st) {
        (void)fd;
        st->st_mode = S_IFCHR;
        return 0;
    }

    int _isatty(int fd) {
        (void)fd;
        return 1;
    }

    int _lseek(int fd, int offset, int whence) {
        (void)fd;
        (void)offset;
        (void)whence;
        return -1;
    }

    void _exit(int status) {
        (void)status;  // Ignore the exit status
        while (1) {
            // Infinite loop to halt execution
        }
    }
}
