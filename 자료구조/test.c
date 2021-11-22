#include <stdio.h>

int main(void)
{ 
    long A,B,C;
    long number = 0;
    scanf("%d %d %d",&A,&B,&C);
    if(B>C){
        printf("-1");
    }
    else {
        number = A / (C-B) + 1;
        printf("%d",number);
    }
    
}