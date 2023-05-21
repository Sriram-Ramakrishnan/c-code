#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int numtoarr(int digit[],int num){
    int remainder = 0,count = 0;
    while (num>0){
        remainder = num%10;
        digit[count] = remainder;
        num/= 10;
        count++;
    }
    return count;
}

void printarr(int arr[],int n){
    int i;
    printf("{");
    for (i=0;i<n;i++){
        printf("%d,",arr[i]);
    }
    printf("}");

int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    int digits[];
    len = numtoarr(digits,num);
    int n;
    printf("Enter rshift :");
    scanf("%d",&n);
}

