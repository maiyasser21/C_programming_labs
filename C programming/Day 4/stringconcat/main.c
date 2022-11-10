#include <stdio.h>
#include <stdlib.h>
#define ENTER 13
void main()
{
    char firstName[100];
    char lastName[100];
    char fullName[200];
    int i=0;
    int j=0;
    printf("enter your first name : ");
    scanf("%s", firstName);
    printf("enter your last name : ");
    scanf("%s", lastName);
    while (firstName[i] != '\0'){
        fullName[j]=firstName[i];
        j++;
        i++;

    }

    i=0;

    while (lastName[i] != '\0'){
        fullName[j]=lastName[i];
        j++;
        i++;
    }
    fullName[j]='\0';
    printf("your full name is : %s", fullName);
}

