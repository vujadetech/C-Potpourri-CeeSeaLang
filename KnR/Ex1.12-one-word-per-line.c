#include <stdio.h>
#define IN 1
 /* inside a word */
#define OUT 0
 /* outside a word */
/* count lines, words, and characters in input */
void
main()
{
  int c, nl, nw, nc, state;
  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    putchar(c);
    ++nc;
    //if (c == '\n')
    //  ++nl;
    if (c == ' ' || c == '\t') {
      if ((state == IN) && (c != '\n'))
        putchar('\n');
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
