#include <stdio.h>
#include "utils/utils.h"
#include "assert.h"

typedef enum { NEWLINE = 10, BLANK = 32, TAB = 9, BACKSPACE = 8 } Whitespace;

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

int
main ()
{
  int nc = 0;

  for ( int c; (c = getchar()) != EOF; ++nc ) {
    putchar( c );
    if (is_blankQ( c )) {
      while ((c = getchar()) == BLANK && (c != EOF))
        blanks++;
      putchar( c );
    } // end if is_blankQ
  }

  //PP_INT(blanks); // PP_INT(nls);PP_INT(tabs);
  PP_INT(blanks);
  return nc;

}
