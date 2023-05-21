#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int binnum(int x){
    int n=0; int i = 0;
    while (x > 0){
        n = n+((x%2)*pow(10,i));
        x= x/2;
        i++;
    }
    return n;
}

int RightShift(int x, int n){
    int i;
    for (i=0;i<n;i++){  //Checks if the binary equivalent of the number has
        if (x%2 == 0){  //the 0 in it as All even numbers have 0 in the last digit
            x = (x>>1); //(Basically 0 x 2^0 = 0 and the rest of the digits
        }else{          //will always be even)
            x = (x>>1);
            x = x+128; ///Binary Equivalent of 128 is 1000 0000
        }}
    return x;
}


int main(){
    int i,times;
    printf("Enter the number of times you would like to observe right shift operation :");
    scanf("%d",&times);
    printf("Note: This shift is applicable only for 8 bit numbers so enter a number less than 255:\n");
    int nums[times],shifts[times],cnums[times];
    for (i=0;i<times;i++){
        int num,n;
        printf("Input #%d:\nEnter the number :",(i+1));
        scanf("%d",&nums[i]);
        printf("Enter right shift :");
        scanf("%d",&shifts[i]);
        cnums[i] = RightShift(nums[i],shifts[i]);
    }

    for (i=0;i<times;i++){
        printf("Case %d:\n%d >> %d = %d\n",(i+1),nums[i],shifts[i],cnums[i]);
        printf("Explanation in Binary format: %d >> %d = %d\n",binnum(nums[i]),shifts[i],binnum(cnums[i]));
    }
    return 0;
}
