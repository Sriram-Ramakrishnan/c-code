#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int a, int b){
    return (a+b);
}
int subtract(int a, int b){
    return (a-b);
}
int multiply(int a, int b){
    return (a*b);
}
int divide(int a, int b){
    return (a/b);
}

int main(){
    int a; int b;
    int result;
    char op = 'x';
    printf("Enter the first Number :");
    scanf("%d",&a);
    printf("Enter the second Number :");
    scanf("%d",&b);
    printf("Enter the operator :");
    scanf(" %c",&op);

    switch(op){
        case '+':
            printf("Addition = %d",add(a,b));
            break;
        case '-':
            printf("Subtraction = %d",subtract(a,b));
            break;
        case '*':
            printf("Multiplication = %d",multiply(a,b));
            break;
        case '/':
            printf("Division = %d",divide(a,b));
            break;
    }
    return 1;
}
