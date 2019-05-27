#include <stdio.h>
#include "utils/utils.h"
#include "assert.h"
/* count chars in input file */
int nc = 0;

int
main ()
{
  
  for ( int c; (c = getchar()) != EOF; ++nc )
    ;
  PP_INT(nc);
  return nc;

}
