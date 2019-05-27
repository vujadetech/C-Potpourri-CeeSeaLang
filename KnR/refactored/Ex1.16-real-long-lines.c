#include <stdio.h>
#define MAXLINE 50 /* maximum input line length */
int getline_ (char line[], int maxline);
void copy (char to[], char from[]);
/* print the longest input line */
int
main ()
{
  int len; /* current line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getline_ (line, MAXLINE)) > 0) // no braces since while only has one statement, the if
    if (len > max) {
    	max = len;
    	copy (longest, line);
    }
  if (max > 0)			/* there was a line */
    printf ("Length = %d, line = %s", len, longest);
  return 0;
}

/* getline_: read a line into s, return length */
int
getline_ (char s[], int lim)
{
  int c, i, k = 0; // k is length of line, even if k > MAXLINE

  for (i = 0; i < lim - 1 && (c = getchar ()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  // Now if i >= lim we can keep counting chars but not putting them in s[].
  if ( i >= lim ) // buffer limit was reached in for loop
    for(k = i; (c = getchar()) != EOF && c != '\n'; ++k)
      ;
  if (c == '\n')
    {
      s[i] = c;
      ++i;
    }
  s[i] = '\0';
  return k; // k is full length, not stopping at max limit.
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
