#include "emp.h"
#define SIZE 100

typedef struct emp{
int id;
unsigned int salary;
char name[100];
} emp;

emp addemployee (void);
void disemployee (emp st);


void chooseline1 (void);
void chooseline2 (void);
void chooseline3 (void);
void printmenu (void);

 void main () {
  int i=0;
  int counter=0;
  emp arr[SIZE];
  printmenu();
 char key;


while (key=getch()){
    if (key==-32);{
     key=getch();
    if (key==72 && (flag==0 || flag==1)){
        chooseline3();
        key=getch();
        if (key==13){
            system("cls");
            printf("exit \n");
            printf("\n if you want to continue press c : \n");
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
            //printf("display \n");
            if (counter != 0){
            disemployee(arr[counter]); }
            else {
                printf("Enter employee first");
            }
            printf("\n if you want to continue press c : \n");
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
            //printf("new\n");
            counter++;
            arr[counter]=addemployee();
            //counter++;
            printf("\n if you want to continue press c : \n");
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
            //printf("new \n");
            counter++;
            arr[counter]=addemployee();
            //counter++;
            printf("\n if you want to continue press c : \n");
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
            //printf("display \n");
            if (counter != 0);{
            disemployee(arr[counter]);
            } }
            else{
                printf("enter employee first : ");
            }
            printf("\n if you want to continue press c : \n");
            key=getche();
            if (key=='c'){
                printmenu();
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

    } } } }

emp addemployee (void){
    emp st;
printf("Enter Employee ID : ");
scanf("%d", &st.id);
printf("Enter Employee salary : ");
scanf("%d", &st.salary);
printf("Enter Employee name : ");
scanf("%s", &st.name);
return st;
}
void disemployee (emp st){
printf("\n Employee ID is : %d", st.id);
printf("\n Employee salary is : %d", st.salary);
printf("\n Employee Name is : %s", st.name);
}
