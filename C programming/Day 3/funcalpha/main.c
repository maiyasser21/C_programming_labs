#include <stdio.h>
#include <stdlib.h>

void checker (char);
int main()
{
char x;
printf("enter character : ");
//x= getchar();
scanf("%c", &x);
checker(x);


    return 0;
}

void checker (char x){
      if (x>='A' && x<='Z' || x>='a' && x<='z'){
        printf("it's an alphabet\n");

    }
      else {
    printf("not an alphabet");
}
}
