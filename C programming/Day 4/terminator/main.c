#include <stdio.h>
#include <stdlib.h>
#define ENTER 13
void main()
{
    char string[100];
    int i=0;
    int flag=1;
    printf("enter character : ");

    do{

    string[i]=getche();

    if (string[i]==ENTER){
            flag=0;
            string[i]='\0';
    }
    else{
    i++;
    }

    }while (flag==1);

    printf("\n %s", string);



    }







