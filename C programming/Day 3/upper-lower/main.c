#include <stdio.h>
#include <stdlib.h>

void uppertolower (char x);
void main()
{
    char x;
    printf("enter letter : ");
    scanf("%c", &x);
    uppertolower(x);

}
void uppertolower (char x){

printf("%c", x-=32);

}
