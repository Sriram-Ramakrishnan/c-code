#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n],i;
    for (i=0;i<n;i++){
        printf("\nElement #%d :",i+1);
        scanf("%d",&arr[i]);
    }
    int j,k;
    for (i=0;i<n;i++){
    for (j=0;j<n-1;j++){
        if (arr[j]>arr[j+1]){
            //printf("%d %d = ",arr[j],arr[j+1]);
            k = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = k;
            //printf("%d %d",arr[j],arr[j+1]);
            //printf("\n");
            }

    }}
    printf("Maximum number is %d\n",arr[n-1]);
    printf("Minimum number is %d",arr[0]);
    return 0;
}
