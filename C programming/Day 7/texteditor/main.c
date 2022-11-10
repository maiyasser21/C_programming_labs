#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#define SIZE 200
void main()
{
    char arr[SIZE];
    char key;
    int i=0;
    gotoxy(10,10);
    do
    {
        for (i=0; i<SIZE; i++)
        {
            key=getch();
            arr[i]=key;
        }


        if (key==ENTER)
        {

            printf("Program Finished \n");
            printf("%s", arr[i]);
        }

        else if (key==-32)
        {
            key=getch();
            switch(key)
            {
            case RIGHT_ARROW:
                i++;
                gotoxy((10+i), 10);
                key=getche();
                arr[i]=key;
                break;
            case LEFT_ARROW:
                i--;
                gotoxy((10-i), 10);
                key=getch();
                arr[i]=key;
                break;
            }
        }
        else {
            printf("%c", arr[i]);
        }
    }
    while(key != ENTER);
    /*while (key != ENTER){
            key=getch();
            if (key==-32){
                switch(key) {
                case 77:
                    i++;
                    gotoxy((10+i), 10);
                    key=arr[i];
                    break;
                case 75:
                    i--;
                    gotoxy((10-i), 10);
                    key=arr[i];
                    break;
                } }



     }*/
}


