#include <stdio.h>
#include <stdlib.h>
#define SIZE 2
typedef struct emp{
int id;
int salary;
char name[100];
} emp;

emp addemployee (void);
void disemployee (emp st);

int main (){
int i=0;
emp arr[SIZE];

for (i=0; i<SIZE; i++){
    arr[i]=addemployee();
}
for (i=0; i<SIZE; i++){
    disemployee(arr[i]);
}


}

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
