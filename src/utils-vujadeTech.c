#include <stdio.h>
#include <string.h>
#include "../include/utils.h"

void pf_int(const char * str, int x) {
  // printf("default buf size = %d\n", DEFAULT_BUFFER_SIZE);
  char str_formatted[ DEFAULT_BUFFER_SIZE ] = "";
  strcat(strcat(str_formatted, str), "%d\n");
  int pf_ret = printf(str_formatted, x);
  if (pf_ret < 0) { printf("error in pf_int"); }
}

size_t strlen_vt(const char * str) {
  size_t len = 0;
  for ( const char* ch = str; *ch++ != '\0' ; len++)
    ;
  return len;
}

/* getline_: read a line into s, return length */
int
getline_vt (char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar ()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  s[i] = '\0';

  // if i == lim, keep going to find real i, but don't change string buffer since full.
  if (i == lim - 1) {
    for ( ; (c = getchar ()) != EOF && c != '\n'; ++i)
      ;
    printf("\n");
  }
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void
copy (char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
/*
int main() {
  pf_int("x = ", 42);
  return 0;
}
*/
