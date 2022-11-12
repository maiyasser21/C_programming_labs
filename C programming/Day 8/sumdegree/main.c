#include <stdio.h>
#include <stdlib.h>

typedef struct Student_Grades {

char Subj_Name [100];
int Subj_Grade;

} Student_Grades;

void main()
{
    int col=0, row=0;
    int sum=0;
    int count=0;
    Student_Grades * arr[20];
    int i=0, j=0;
    printf("Enter No. of cols : \n");
    scanf("%d", &col);
    printf("Enter No. of rows : \n");
    scanf("%d", &row);
    for (i=0; i<row; i++){
        arr[i]=(Student_Grades *)malloc(col * row *  sizeof(Student_Grades));
    }


    for (i=0; i<row; i++){
        for (j=0; j<col; j++){

            printf("Enter Subject Name [%d][%d] : \n", i,j);
            scanf("%s", (arr[i][j].Subj_Name));
            printf("Enter Subject grade [%d][%d]: \n", i,j);
            scanf("%d",&(arr[i][j].Subj_Grade));
            count++;
            sum=sum+(arr[i][j].Subj_Grade);

        }

    }
    for (i=0; i<row; i++){
        for (j=0; j<col; j++){

            printf("Student [%d][%d] : [%s]\n", i,j,arr[i][j].Subj_Name );
            printf("Student grade [%d][%d]: [%d]\n", i,j,arr[i][j].Subj_Grade );


        }
    }

printf("The Sum of Student grade is = %d \n", sum);
printf("The average of Student grade is = %d \n", (sum/count));
}
