#include <stdio.h>
#include <stdlib.h>
int * incArray(void);
void main()
{
    int * ptr= NULL;
    ptr=incArray();
    int i=0;
    for (i=0; i<5; i++){
    printf("Array [%d] = %d\n",i, ptr[i]); }


}

int * incArray (void){
int * a=NULL;
int i=0;
a=(int *) malloc(5*sizeof(int));
for (i=0; i<5; i++)
{
 scanf("%d", &a[i]);
}
return a;

}
