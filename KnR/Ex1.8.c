#include <stdio.h>
#include "utils/utils.h"
#include "assert.h"

typedef enum { NEWLINE = 10, BLANK = 32, TAB = 9 } Whitespace;

Whitespace c;
int blanks = 0, nls = 0, tabs = 0;

bool is_WhitespaceQ ( char ch ) {
  switch( ch ) {
    case NEWLINE: return true;
    case BLANK:   return true;
    case TAB: return true;
    default: return false;
  }
}

int
main ()
{
  int nc = 0;

  for ( int c; (c = getchar()) != EOF; ++nc ) {
    if (is_WhitespaceQ( c )) {
      if (c == BLANK) ++blanks;
      if (c == NEWLINE) ++nls;
      if (c == TAB) ++tabs;
    }
  }

  PP_INT(blanks);PP_INT(nls);PP_INT(tabs);
  return nc;
}
