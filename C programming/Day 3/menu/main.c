#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=0;
do{
    system("cls");
    printf("Choice 1: \n");
    printf("Choice 2: \n");
    printf("Choice 3: \n");
    scanf("%d", &x);
   if (x==1){
        system("cls");
        printf("choice one");
        getch();
    }
    else if (x==2){
        system("cls");
        printf("choice two");
        getch();
    }
    else if (x==3){
        system("cls");
        printf("choice three");
        getch();
    }
    else
    {
    system("cls");

    }
}while(x<=3);
return 0;
}


