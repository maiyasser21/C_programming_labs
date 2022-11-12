#ifndef MENUDYN_H_INCLUDED
#define MENUDYN_H_INCLUDED
#include <dos.h>
#include <dir.h>
#include <windows.h>

char menu1[10][10]={"new", "display","exit"};
int flag=0;

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void chooseline1(void){
 system("cls");
 gotoxy(55,10);
 SetColor(25);
 printf("%s", menu1[0]);
 SetColor(15);
 gotoxy(55,21);
 printf("%s",menu1[1]);
 SetColor(15);
 gotoxy(55,32);
 printf("%s", menu1[2]);
 SetColor(15);
 flag=1;

 }
 void chooseline2(void){
 system("cls");
 gotoxy(55,10);
 printf("%s", menu1[0]);
 SetColor(25);
 gotoxy(55,21);
 printf("%s",menu1[1]);
 SetColor(15);
 gotoxy(55,32);
 printf("%s", menu1[2]);
 SetColor(15);
 flag=2;
 }
 void chooseline3(void){
 system("cls");
 gotoxy(55,10);
 printf("%s", menu1[0]);
 SetColor(15);
 gotoxy(55,21);
 printf("%s",menu1[1]);
 SetColor(25);
 gotoxy(55,32);
 printf("%s", menu1[2]);
 SetColor(15);
 flag=3;
 }
 void printmenu(void){
gotoxy(55,10);
printf("%s", menu1[0]);
gotoxy(55,21);
printf("%s", menu1[1]);
gotoxy(55,32);
printf("%s",menu1[2]);

}



#endif // MENUDYN_H_INCLUDED
