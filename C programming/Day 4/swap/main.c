#include <stdio.h>
#include <stdlib.h>
void swap (int *, int *);
void main()
{   int x=0;
    int y=0;
    printf("Enter two numbers : ");
    scanf("%d", &x);
    scanf("%d", &y);
swap(&x, &y);
printf("after swapping x= %d, y=%d", x,y);

}



void swap (int * x, int *y){
    int temp=0;
    temp=*x;

    *x=*y;
    *y=temp;

}
