
#include <stdarg.h>
#include <stdio.h>
#include "../utils/utils.h"





int
spit_em_out (int count, ...) // just return all inputs
{
  va_list ap;
  int i;

  va_start (ap, count);         /* Initialize the argument list. */

  for (i = 0; i < count; i++)
    printf("%s ", va_arg (ap, char*));    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return 42;
}


void
main (void)
{
//printf ("%d\n", spit_em_out (2, 'a', 'b'));
  char s[] = "  hellow";
  trimLeft(s, 1, ' ');
  printf("%s ", s);

  //printf ("%d\n", spit_em_out (10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10));

  //return 0;
}
