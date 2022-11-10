#include <stdio.h>
#include <stdlib.h>
typedef struct emp {
int id;
char name[100];
int salary;
} emp;
void main()
{
    emp emparr[3];
    int i=0;
    for (i=0; i<3; i++){
    printf(" \n Enter Data for employee number %d (ID, Name, Salary) : ",i+1);
    scanf("%d %[^\n]%*c %d", &emparr[i].id, &emparr[i].name, &emparr[i].salary);
    printf("\n Employee %d : %d %s %d",i+1, emparr[i].id, emparr[i].name, emparr[i].salary);
}};
