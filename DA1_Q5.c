#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int rnum = 0,rem,onum = num;
    while (num>0){
        rem = num%10;
        rnum = rnum*10 + rem;
        num = num/10;
    }
    printf("Number: %d, Reverse: %d.",onum,rnum);
    if (rnum == onum){
        printf(",Palindrome");
    }else{
        printf(",Not a Palindrome");
    }
    return 0;
}
