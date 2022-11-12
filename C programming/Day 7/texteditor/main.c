#include <stdio.h>
#include <stdlib.h>
#include "library.h"
#define SIZE 200

/********************not finished*****************/

void main()
{
    char arr[SIZE];
    char key;
    int i=0;
    //int curs=0;

    while(key != ENTER)
    {
        key=getch();
        if (key==-32)
        {
            key=getch();

            if(key==RIGHT_ARROW){
                i++;
                gotoxy(i,0);
                arr[i+1]=getch();
                }
            if (key==LEFT_ARROW){
                i--;
                gotoxy(i,0);
                arr[i-1]=getch();
                i--;

                }
            if (key==HOME){
                gotoxy(0,0);

                }
            if (key==INSERT){

                gotoxy(i,0);
            }


        }
        else if (key == ENTER)
        {
            printf("%s", arr);
        }

        else if (key==BACKSPACE)
        {
        putch('\b');
        putch(' ');
        arr[i-1]=putch('\b');
        i--;
        }
        else {

        arr[i]=key;
        gotoxy(i,0);
        i++;
        printf("%c \n", key);


        }

    }
<<<<<<< HEAD




}
=======
    while(key != ENTER);
   
>>>>>>> 94861cb6d199da7c1a89da8a8703a8a6f371d7b6
