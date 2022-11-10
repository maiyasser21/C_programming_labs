#include <stdio.h>
#include <stdlib.h>

void main()
{
    char key;

    printf("enter key : ");
    key=getche();
    if (key==-32){
        key=getch();
        printf("\n extended key with ascii %d", key);
    }
    else {
        printf("\n normal key with ascii %d", key);
    }
    }


