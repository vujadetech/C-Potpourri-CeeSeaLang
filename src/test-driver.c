#include <stdio.h>
#include "../include/utils-vujadeTech.h"

int
main() {
  int x = 42;
  // pf_int("\nx = ", x);
  int len;
  char line[MAXLINE];
  while ( (len = getline_vt(line, MAXLINE)) > 0 ) {
    pf_int("len = ", len);
    printf("%s", line);
  }
  return 0;
}
