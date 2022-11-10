#include <stdio.h>
#include <stdlib.h>
#define ENTER 13
void main()
{
    char string1[100];
    char string2[100];
    int i=0;
    int j=0;
printf("enter string : ");
scanf("%[^\n]%*c", string1);

    while (string1[i] != '\0'){

        string2[j]=string1[i];

        j++;
        i++;

    }

    printf("string copied is : %s", string2);


}

