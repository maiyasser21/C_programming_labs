#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
char word[100];
int counter;
int i;
printf("enter word : ");
scanf("%s", word);
for (i=0; i<strlen(word); i++){
    counter++;
}

printf("the length of string is : %d", counter);

}
