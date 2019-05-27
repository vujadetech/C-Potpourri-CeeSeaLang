#include <stdio.h>
#include "../include/utils-vujadeTech.h"

#define MAX_LEN 10 // Set this to 80 or whatever you like.

int
main() {
  int len;
  char line[ MAXLINE ];
  while ( (len = getline_vt(line, MAXLINE)) > 0 ) {
    if ( len > MAX_LEN ) printf("%s", line);
  }
  return 0;
}
