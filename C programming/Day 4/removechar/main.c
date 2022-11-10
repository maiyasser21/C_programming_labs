#include <stdio.h>
#include <stdlib.h>

void main()
{
    char string[100];
    int i=0;
    printf("enter string : ");
    scanf("%[^\n]%*c", string);

    while(string[i] != '\0'){
        if ((string[i]>='A' && string[i]<='Z') || (string[i] >='a' && string[i] <='z')){
            printf("%c", string[i]);
        }
        i++;



    }

}
