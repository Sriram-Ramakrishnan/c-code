#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int swap(int* m,int* n){
    int* k;
    *k = *m;
    *m = *n;
    *n = *k;
    return *m,*n;
}



int bubblesort(int arr[],int n){
    int *m; int *n;
    m = &arr[0]; n = &arr[1];
    for (int i=0;i<n;i++){
    for (int j=0;j<n-1;j++){
        if (*m>*n){
            *m,*n = swap(m,n);
            }}}
    return 0;
}

int createarr(int arr[], int n){
    int i;
    for (i=1;i<=n;i++){
        printf("Enter Element #%d :",i);
        scanf("%d",&arr[i-1]);
    }
    return 0;
}

int binary_search(int arr[],int lwl,int upl,int obj){
    if (lwl > upl){
        return -1;
    }
    else{
        int mid = lwl + (upl-lwl)/2;
        if (obj == arr[mid]){
            return mid;
        }else if (obj>arr[mid]){
            return binary_search(arr,mid,upl,obj);
        }else if (obj<arr[mid]){
            return binary_search(arr,lwl,mid,obj);
    }}
}

int linear_search(int arr[],int n,int obj){
    int i;
    for (i=0;i<n;i++){
        if (obj == arr[i]){
            return i;
            break;
        }
    }
    if (i == n){
        return -1;
    }
}
int main(){
    int n,obj,pos,opt;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    createarr(arr,n);
    bubblesort(arr,n);
    printf("\nEnter the element to be searched:");
    scanf("%d",&obj);
    printf(" 1. Binary Search \n 2. Linear Search \n Enter the option :");
    scanf("%d",&opt);
    if (opt == 1){
        pos = binary_search(arr,0,n,obj);
    }else{
        pos  = linear_search(arr,n,obj);
    }

    if (pos==-1){
        printf("Element not found");
    }else{
        printf("Element found at pos %d",pos);
    }
    return 0;

}



