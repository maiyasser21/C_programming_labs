#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int j=0;
    printf("enter number for multiplication table : ");
    scanf("%d", &j);
    for (i=0; i<=10; i++){
        printf("%d * %d = %d \n", i, j, i*j);
    }


    return 0;
}
