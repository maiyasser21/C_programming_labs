#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("enter two numbers: \n");
    scanf("%d %d", &x, &y);
    printf("quotient is = %d \n", x/y);
    printf("remainder is = %d \n", x%y);
    return 0;

}
