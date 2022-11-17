#include "libftprintf.h"

/**
 * va_start(x, y)
 => initialize va_list args (that has to be declared in advance) with y (the last parameter before the ...)
 => return nothing
 * va_arg => return the value of the following argument (updates args so that the next call to the va_arg function fetches the next argument)
 * arg (call it whatever) = variable argument list
 * va_end => function ends the processing of arg (the variable argument list)
 */

int ft_printf(const char *format, ...)
{
  int num_args = ft_strlen(format);
  void  *ptr;
  int i;

  i = 0;
  va_list args;
  va_start(args, format);

  while (i < num_args)
  {
    if (format[i++] == c)
    *ptr = va_arg(args, char);
  }
  va_end(args);
  // return 0 if all ok || >0 if not
}
