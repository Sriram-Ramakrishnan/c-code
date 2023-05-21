#include <stdio.h>
int main()
{

    char alpha_1;
    int c; char res;

    scanf("%c ",&alpha_1);
    scanf("%d",&c);
    int i = 0;
    for(i = 1;i<=c;i++){
        res = alpha_1 + i;
        printf("%c ",res);
    }


    printf("\n");


    return 0;
}

