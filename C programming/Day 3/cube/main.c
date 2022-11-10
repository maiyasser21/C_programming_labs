#include <stdio.h>
#include <stdlib.h>

void cube (int x);
void main()
{
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    cube(x);
}


void cube (int x){

printf("the cube of the number is %d \n", x*x*x);

}
