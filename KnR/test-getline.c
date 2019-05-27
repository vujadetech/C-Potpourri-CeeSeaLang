#include <stdio.h>
#include "utils/utils.h"
#define MAXLINE 8
/* maximum input line length */
int getline_ (char line[], int maxline);
void copy (char to[], char from[]);
void pr_length_line (int len, char line[]); // len supplie
/* print the longest input line */

int
main ()
{
  int len;
  /* current line length */
  int max;
  /* maximum length seen so far */
  char line[MAXLINE];
  /* current input line */
  char longest[MAXLINE];
  /* longest line saved here */

  max = 0;
  while ((len = getline_ (line, MAXLINE)) > 0) {
    pr_length_line( len, line );
    if (len > max) {
    	max = len;
    	copy (longest, line);
    }
  }
  if (max > 0)			/* there was a line */
    printf ("\nmax: %d, line = %s\n", max, longest);
  return 0;
}

/* getline_: read a line into s, return length */
int
getline_ (char s[], int lim)
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

void pr_length_line (int len, char line[]) {
  //PP_INT(len);
  printf("%d: %s", len, line);
}
