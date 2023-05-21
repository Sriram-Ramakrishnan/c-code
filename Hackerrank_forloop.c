#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mod(int n){
    if (n>0){
        return n;
    }
    else{
        return -n;
    }
}

int main()
{
    int n;int exp;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int lim = 2*n -1;
    for(int i=-(n-1);i<(n);i++){
        for(int j=-(n-1);j<(n);j++){
            exp = n - (mod(n-1)+i)*(mod(n-1)+j);
            printf("%d ",exp);
        }
        printf("\n");
    }
    return 0;
}
