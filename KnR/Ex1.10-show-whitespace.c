#include <stdio.h>
#include "utils/utils.h"
#include "assert.h"

typedef enum { NEWLINE = 10, BLANK = 32, TAB = 9, BACKSPACE = 8 } Whitespace;
typedef enum { BACKSLASH = 92 } SpecialChar;

Whitespace c;
int blanks = 0;

bool is_WhitespaceQ ( char ch ) {
  switch( ch ) {
    case NEWLINE: return true;
    case BLANK:   return true;
    case TAB: return true;
    default: return false;
  }
}

bool is_blankQ( char ch ) { return (ch == BLANK); }
bool replaceQ( char ch ) {
  return ( (ch == BACKSPACE) || (ch == TAB) || (ch == BACKSLASH) );
}
bool replace( char ch ) {
  switch ( ch ) {
    case TAB: //, BACKSPACE, BACKSLASH:
      putchar( BACKSLASH );
      putchar('t');
      break;
    case BACKSPACE: //, BACKSPACE, BACKSLASH:
      putchar( BACKSLASH );
      putchar('b');
      break;
    case BACKSLASH: //, BACKSPACE, BACKSLASH:
      putchar( BACKSLASH );
      putchar( BACKSLASH );
      break;
    default:
      return -1;
  }
}

int
main ()
{
  int nc = 0;

  for ( int c; (c = getchar()) != EOF; ++nc ) {
    if (replaceQ( c ))
      replace( c );
    else
      putchar( c );
  }

  //PP_INT(blanks); // PP_INT(nls);PP_INT(tabs);
  //PP_INT(blanks);
  return nc;

}
