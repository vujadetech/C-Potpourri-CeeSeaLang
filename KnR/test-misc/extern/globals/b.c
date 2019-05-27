


#include <stdio.h>

//extern int i; // declaration
int main() {
    extern int i;
    printf("%d\n", i+1);
}
