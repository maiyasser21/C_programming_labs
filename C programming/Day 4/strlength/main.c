#include <stdio.h>
#include <stdlib.h>

void main()
{
    char string[100];
    int counter=0;
    int i=0;
    printf("enter string : ");
    scanf("%[^\n]%*c", string);

    while(string[i]!='\0'){

        counter++;
    i++;

    }
    printf("the length : %d", counter);
}
