#include <stdio.h>
#include <stdlib.h>

void main()
{
    char string [100];
    char key;
    int i=0;
    int counter=0;
    printf("enter string : ");
    scanf("%[^\n]%*c", string);
    printf("enter key : ");
    key= getche();

    while (string[i] != '\0'){
            if (string[i]==key){
                counter++;

            }
            i++;
    }

    printf("\n the frequancy is : %d", counter);

}
