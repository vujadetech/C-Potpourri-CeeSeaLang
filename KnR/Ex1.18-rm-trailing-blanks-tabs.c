#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include "../include/utils.h"

#define MAXLINE 80

char line[ MAXLINE ];
int length = 0;

/*
int isBlankOrTabQ( const char * c ) {
  return (( c == ' ' ) || ( c == '\t' ));
}

int sameCharQ ( char * str, const char ch ) {
  return ch == *str;
}

char * retreatWhile ( char * s, const char c ) {
  char * loc = firstNull( s );
  while ( *(--loc) == c )
    ;
  *(++loc) = NULL;
  return loc;
}

char * retreatWhile_fp ( const char *s, int (* f)(char) ) {
  char * pc = s;
  while ( *pc++ != '\0' )
    f( pc );
}
*/

void
main() {
  while ( (length = getline_vt (line, MAXLINE)) > 0 ) {
    //strrev_vt( line );
    //for ( char * ch = line; !isBlankOrTabQ( ch ); ++ch )
    //printf( "%s\n", newLine );
    //char * newLine = retreatWhile_fp( line, isBlankOrTabQ );
    if (!lineIsBlank( line )) { // Assuming first char is \n is a decent definition of a blank line.
      char * newLine = retreatWhile_fp( line, isBlankOrTabQ, '\n' );
      printf( "%s\n", line );
      printf( "Length = %d\n", length );
    }
    //  printf( "%s\n", newLine );
  }
}
