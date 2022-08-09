#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
  int count = 0, i = 0;
  // va_list declares a list that has unknown number of arguments
  va_list data;
  // va_start initiats the list
  va_start(data, format);

  // _print("Hello")

  /**-- We are trying to see a way to make sure we count only characters without
   * '%' and null --**/

  for (i = 0; format[i] != '\0';) {
    /* count the number of characters
  ----
  Anytime _putchar prints a char it is counted as 1 and count is incremented
  */
    if (format[i] != '%') {
      count = count + _putchar(format[i]);
      i++;
    } else if (format[i] == '%' && format[i + 1] != ' ') {
      switch (format[i + 1]) {
      case 'c': /*is the value after % equal to c?
     if so we print the char from the va_arguments */
        count = count + _putchar(va_arg(data, int));
        break;
      case 's':
        count += print_string(
            va_arg(data, char *)); // print_string function loops through the
                                   // given arguments, prints and count them
        break;
      case '%':
        /* Print the character from the va_arguments */
        count += _putchar('%');
        break;
      default:
        break;
      }
      i += 2;
    }
  }
  return (count);
}
