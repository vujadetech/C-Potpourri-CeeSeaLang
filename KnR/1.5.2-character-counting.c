#include <stdio.h>
#include "utils/utils.h"
/* count chars in input file */
int nc = 0;

int
main ()
{
  int c;
  c = getchar ();
  while (c != EOF)
  {
    nc++;
    c = getchar ();
  }
  PP_INT(nc);
  return nc;
}
