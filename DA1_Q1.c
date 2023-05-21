#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max_arr(int arr[],int n){
    int max = arr[0],i;
    for (i=0;i<n;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min_arr(int arr[],int n){
    int min = arr[0],i;
    for (i=0;i<n;i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int createarr(int arr[], int n){
    int i;
    for (i=1;i<=n;i++){
        printf("Enter Element #%d :",i);
        scanf("%d",&arr[i-1]);
    }
    return 0;
}
int main(){
    int n,maxnum,minnum;
    printf("Enter Number of elements:");
    scanf("%d",&n);
    int arr[n];
    createarr(arr,n);
    maxnum = max_arr(arr,n);
    minnum = min_arr(arr,n);
    printf("\nMax element = %d ",maxnum);
    if ((maxnum%2) == 0){
        printf("and it is an even number.\n");
    }
    else{
        printf("and it is an odd number.\n");}
    printf("\nMin element = %d ",minnum);
    if ((minnum%2) == 0){
        printf("and it is an even number.\n");
    }
    else{
        printf("and it is an odd number.\n");
    }
    return 0;
}
