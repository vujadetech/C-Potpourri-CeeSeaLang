#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils/utils.h"

#define MAXLINE 80

char line[ MAXLINE ];
int length = 0;



void
main() {
  /*
  char str[] = "aLongWord";
  int k = len(str);
  printf("%s\n", str);
  printf("%s\n", str_rev(str));
  PP_INT(k);
  */

  while ( (length = getline_ (line, MAXLINE)) > 0 ) {
    str_rev(line);
    putline(line);
  }

}