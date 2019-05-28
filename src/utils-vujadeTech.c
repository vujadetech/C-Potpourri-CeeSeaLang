#include <stdio.h>
#include <string.h>
#include "../include/utils.h"

char str[] = "This is a test string.";
char * pch = str;
char  zs[6] = "abcd ";
char  zas[6] = "qqzzz";
char  tabsBlanksEnd[] = "tabsAtEnd          ";
//char * fn = firstNull(zs);

// Convenience utils:
void pf_int(const char * str, int x) {
  // printf("default buf size = %d\n", DEFAULT_BUFFER_SIZE);
  char str_formatted[ DEFAULT_BUFFER_SIZE ] = "";
  strcat(strcat(str_formatted, str), "%d\n");
  int pf_ret = printf(str_formatted, x);
  if (pf_ret < 0) { printf("error in pf_int"); }
}

int lineIsBlank( const char * line ) {
  return line[0] == '\n';
}

// Reimplementation of C builtins:
size_t strlen_vt(const char * str) {
  size_t len = 0;
  for ( const char* ch = str; *ch++ != '\0' ; len++)
    ;
  return len;
}

int isBlankOrTabQ( const char c ) {
  return (( c == ' ' ) || ( c == '\t' ));
}

char* butLast ( char str[] ) {
  char* ch = str;
  while ( *(++ch) != '\0' )
    ;
  return --ch;
}

char* firstNull ( char str[] ) {
  char * ch = str;
  while ( *(++ch) != '\0' )
    ;
  return ch;
}

char* advanceUntil( char s[], const char c ) {
  if ( c == s[0] ) return s;
  char * pc = s;
  while ( *(++pc) != c && *pc != '\0' )
    ;
  return pc;
}

/*
char * firstInstance ( char s[], char c ) {
  char * ptr = advanceUntil( s, c );
  if ( ptr == )
}
*/

char * retreatWhile ( char * s, const char c ) {
  char * loc = firstNull( s );
  while ( *(--loc) == c )
    ;
  *(++loc) = '\0';
  return loc;
}

int is_z( const char c ) { return c == 'z'; }

/*
char * retreatWhile_fp ( char *s, int (* f)(char) ) {
  char * pc = firstNull( s );
  while ( f( *(--pc) ) )
    ;
  *(++pc) = '\0';
  return pc;
}
*/
char * retreatWhile_fp ( char * s, int (* f)( char ), char endChar ) {
  char * pc = advanceUntil( s, endChar );
  if ( *pc == '\0' ) return pc;
  for ( ; f( *(--pc) ) ; *pc = '\0' )
    ;
  return pc;
}

//char * replaceFirst ( char * s, char old, char new ) {
//  return s;
//}

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
copy_vt (char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}

char * strrev_vt( char s[] ) {
  int n = strlen(s) - 1; // s[0] ...s[length - 1]
  for( int i = 0; i < n / 2; i++ ) {
    swap_ch( &s[i], &s[n - i] );
  }
  return s;
}

void
swap_ch( char * px, char *py ) { // Vuja de Tech
  char temp = *px;
  *px = *py;
  *py = temp; }

/*
int main() {
  pf_int("x = ", 42);
  return 0;
}
*/
