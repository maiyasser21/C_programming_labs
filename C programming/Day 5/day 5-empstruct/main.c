#include <stdio.h>
#include <stdlib.h>
typedef struct emp_struct {
int id;
int salary;
float deduction;
float bouns;
char name[100];
} emp_struct;
void main()
{
   float employee_netsalary=0;
   emp_struct employee;
   printf("enter your information(id, name, salary, bouns, deduction) : ");
   scanf("%d %[^\n]%*c %d %f %f", &employee.id, employee.name, &employee.salary, &employee.bouns, &employee.deduction);
   employee_netsalary= ((employee.salary+employee.bouns)-employee.deduction);
   printf("\n EMPLOYEE ID is : %d \n EMPLOYEE NAME is : %s \n EMPLOYEE NET SALARY is : %f", employee.id, employee.name,  employee_netsalary);



}
