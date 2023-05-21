#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    printf("Enter Number :");
    scanf("%d,&num");
    printf("The number = %d\n",num);
    printf("ID = %p\n",&num);
    int rnum = 0,rem;
    while (num>0){
        rem = num%10;
        rnum = rnum*10 + rem;
        num = num/10;
    }
    printf("The reversed number = %d",rnum);
    return 0;
}
