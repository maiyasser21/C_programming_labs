#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void main()
{
    int arr[SIZE];
    int *ptr=arr;
    int i=0;
    int j=0;
    for (i=0;i<=SIZE; i++){
        scanf("%d", &arr[i]);

    }
    for (j=0;j<=SIZE; j++){
        printf("%d", ptr[j]);
    }



}

