#include <stdio.h>


int createarr(int arr[], int n){
    int i;
    for (i=0;i<n;i++)
        printf("Enter Element #%d :",(i+1));
        scanf("%d",&arr[i]);
    return 0;
}
int len(int n){
    int count,num;num = n;
    while (num>0){
        num=num/10;
        count++;}
    return count;
}
int sum(int n){
    int count,num,rem;num = n;
    while (num>0){
        rem = num%10;
        num=num/10;
        count= count+rem;}
    return count;
}

#include <stdio.h>
int main(){
    /*
    printf("\nEnter the operations you would like to perform:");
    printf("\n 1. Calculate the sum of its digits");
    printf("\n 2. Reverse the number.");
    printf("\n 3. Obtain the sum of the first and last digit of this number.");
    printf("\n 4. Find the count of odd and even numbers in the given input");
    printf("\n Press any key to exit the program.");*/
    int opt;
    //printf("\nEnter the operation no.:");
    scanf("%d",&opt);
    int n,length,sumd;
    int sum,num,rem;
    int i;int revnum = 0;
    int ec = 0;int oc = 0;
    switch (opt){
    case 1:
        //printf("\nEnter the number:");
        scanf("%d",&n);
        num = n;sum = 0;
        while (num>0){
            rem = num%10;
            num=num/10;
            sum = sum+rem;}
        printf("%d",sum);
        break;
    case 2:
        //printf("\nEnter the number:");
        scanf("%d",&n);
        revnum = 0;
        while (n>0){
            rem = n%10;
            revnum = revnum*10+rem;
            n = n/10;}
        printf("%d",revnum);
        break;
    case 3:
        //printf("\nEnter the number:");
        scanf("%d",&n);
        revnum =  n%10;
        while (n>0){
            rem =  n%10;
            n = n/10;
        }
        revnum = revnum+rem;
        printf("%d",revnum);
        break;
    case 4:
        //printf("\nEnter the number:");
        scanf("%d",&n);
        while (n>0){
            rem = n%10;
            if (rem%2 == 0){
                ec++;
            }else{
                oc++;}
            n= n/10;
        }
        printf("even is %d",ec);
        printf("\nodd is %d",oc);
        break;
    default:
        printf("\nTerminated");
    }
    return 0;
}
