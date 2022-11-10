#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x=0,y=0,z=0;
    printf("enter three numbers ");
    scanf("%d %d %d", &x, &y, &z);
    if ((x>y && x>z))  {
        printf(" %d is the largest number", x);
         }
        else if((y>x && y>z)){
            printf("%d is the largest number", y);
            }
            else  {
                printf("%d is the largest number", z);

                }

            }



