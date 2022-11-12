#ifndef LIBRARY
#define LIBRARY
#include<windows.h>
#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define HOME 71
#define INSERT 79
#define BACKSPACE 8
#define ENTER 13

void SetColor(int ForgC);
void textattr(int ForgC);
void clrscr();
void gotoxy(int x, int y);

#endif //LIBRARY
