#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grade=0;
    printf("please enter your grade : ");
    scanf("%d", &grade);
    if (grade<=100 && grade>=85 ){
        printf("Excellent");
    }
    else if (grade<85 && grade>=75){
        printf("Very Good");
    }
    else if (grade<75 && grade>=65){
        printf("Good");
    }
    else if (grade<65 && grade>=50){
        printf("Pass");
    }
    else if (grade<50 && grade>=0) {
        printf("Fail");
    }
    else {
        printf("error");
    }
    return 0;
    }

