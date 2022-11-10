#include "menu.h"

void chooseline1 (void);
void chooseline2 (void);
void chooseline3 (void);
void printmenu (void);

 void main () {
 printmenu();
 char key;

 //key=getch();

while (key=getch()){
    if (key==-32);{
     key=getch();
    if (key==72 && (flag==0 || flag==1)){
        chooseline3();
        key=getch();
        if (key==13){
            system("cls");
            printf("exit \n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }
    }
    else if (key==72 && flag==3){
        chooseline2();
         key=getch();
        if (key==13){
            system("cls");
            printf("display \n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }

            }
    else if (key==72 && flag==2){
        chooseline1();
         key=getch();
        if (key==13){
            system("cls");
            printf("new\n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }

    }
    else if (key==80 && (flag==0 || flag==3)){
        chooseline1();
         key=getch();
        if (key==13){
            system("cls");
            printf("new \n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }
         }

    else if (key==80 && flag==1){
        chooseline2();
         key=getch();
        if (key==13){
            system("cls");
            printf("display \n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }
         }

    else if (key==80 && flag==2){
        chooseline3();
         key=getch();
        if (key==13){
            system("cls");
            printf("exit \n");
            printf("if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
            }
        }

    } } }
 }



