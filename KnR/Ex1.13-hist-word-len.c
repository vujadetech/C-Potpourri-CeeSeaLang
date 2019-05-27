#include <stdio.h>
// The longest word we'll assume is no longer than "Supercalifrag...". Actually let's just say it's 6
// b/c that's plenty literate.
#define MAX_WORD_LENGTH 6
#define IN 1
#define OUT 0

void putNStars( int n ) {
  for (int i = 0; i < n; i++)
    putchar('*');
}

void
main()
{
  int c, i, state = OUT;
  int nLength[ MAX_WORD_LENGTH ]; // nLength[i] is number of length i+1, since 0 indexing in C

  int wordLen = 0; // current word length
  for (i = 0; i < MAX_WORD_LENGTH; ++i)
    nLength[i] = 0;

  while ((c = getchar()) != EOF) {
    if (!(c == ' ' || c == '\n' || c == '\t'))
      wordLen++; // c is another char in the current word
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) { // transistioning from IN to OUT, so increment nLength for this wordLen
        nLength[ wordLen ]++;
        wordLen = 0; // reset wordLen
      }
        state = OUT;
      }
    else if (state == OUT)
      state = IN;
  } // end while
  for (i = 0; i < MAX_WORD_LENGTH; ++i) {
    printf("\n%d: ", i);
    putNStars( nLength[i] );
  }
}
