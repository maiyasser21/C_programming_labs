#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void main (void){
int i=1;
int row=1, col=0;
int size=0;
printf("enter size : ");
scanf("%5d", &size);
col=((size+1)/2);
for (i=1; i<=size*size; i++){
    gotoxy(col*5, row);
    printf("%5d", i);
    delay(1);

    if (i % size==0){

        //col=((size+1)/2);

        row++;
    }

    else {
        row--;
        col--;

    if (row == 0 ){
        row=size;
    }

    else if (col==0){
        col=size;
    }

    }
}

}
