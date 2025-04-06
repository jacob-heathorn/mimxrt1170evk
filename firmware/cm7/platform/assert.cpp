#include <stdio.h>
#include <stdint.h>

extern "C" {
#include "legacy/cmsis/cmsis_gcc.h"
}

#include "platform/assert_led.hpp"
 
#ifndef NDEBUG
void __assert_func(const char *file, int line, const char *func, const char *failedExpr)
{
  // Turn on a Red LED.
  AssertLed::instance().write(true);

  // Print the error.
  printf("ASSERT ERROR \" %s \": file<\"%s\"> Line<\"%d\"> function<\"%s\"> \r\n", failedExpr, file, line, func);
  for (;;)
  {
    __BKPT(0);
  }
}
#endif /* NDEBUG */
