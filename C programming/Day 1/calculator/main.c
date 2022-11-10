#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
int y;
int z;
printf("enter two numbers");
scanf("%d %d", &x, &y);
printf("Choose operation ADD=1, SUB=2, MUL=3, DIV=4");
scanf("%d", &z );

switch (z)
{
case 1:
    printf("sum is= %d", x+y);
    break;
case 2:
    printf("sub is= %d", x-y);
    break;
case 3:
    printf("Multiplacation is = %d", x*y);
    break;
case 4:
    printf("division is = %d", x/y);
    break;
default:
    printf("error");
return 0;

}


}
