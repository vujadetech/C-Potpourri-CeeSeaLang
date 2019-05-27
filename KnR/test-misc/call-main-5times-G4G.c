#include <stdio.h>
int main()
{
    //static int i=5;
    int i=5;
    printf("%d ",i);
    if(--i){
        main();
        printf("%d \n",i);
        //main();
    }
}
