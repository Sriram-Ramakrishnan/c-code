#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct student{
    int rollno;
    char name[50];
    double mark1;
    double mark2;
    };
int main(){
    /**struct student* s1;
    void* ptr;
    ptr = &s1;
    for (int i = 0;i<4;i++){
        printf("%x : ",ptr);
        if ((i==2)||(i==3)){scanf("%lf",ptr);}
        else if (i == 1){scanf("%s",ptr);}
        else{scanf("%d",ptr);}
        ptr++;
    }
    ptr--;
    printf("\n %lf",*(double *)ptr);ptr--;
    printf("\n %lf",*(double *)ptr);ptr--;
    printf("\n %s",*(char *)ptr);ptr--;
    printf("\n %d",*(int *)ptr);ptr--;
    **/
    struct student s2;
    void* ptr;
    ptr = &s2.rollno;
    for (int i = 0;i<4;i++){
        printf("%x : ",ptr);
        if ((i==2)||(i==3)){scanf("%lf",ptr);}
        else if (i == 1){scanf("%s",ptr);}
        else{scanf("%d",ptr);}
        ptr++;
    }
    ptr--;
    printf("\n%x : %lf",ptr,*(double *)ptr);ptr--;
    printf("\n%x : %lf",ptr,*(double *)ptr);ptr--;
    printf("\n%x : ",ptr);ptr--;
    printf("\n%x : %d",ptr,*(int *)ptr);ptr--;
    return 0;
}
