#include <stdio.h>
#include <stdlib.h>

void main()
{
    char oper;
    int x=0;
    int y=0;
    printf("enter two intgers : ");
    scanf("%d %d", &x, &y);
    printf("enter the operator for the wanted operation (*,+,-,/): ");
    oper=getchar();
    scanf("%c", &oper);
    //oper = getc(stdin);
    switch (oper) {
    case '+':
    printf("sum is= %d", x+y);
    break;
    case '-':
    printf("sub is= %d", x-y);
    break;
    case '*':
    printf("Multiplacation is = %d", x*y);
    break;
    case '/':
    printf("division is = %d", x/y);
    break;
    default:
    printf("error");
    }


}
