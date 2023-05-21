#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct stack {
    int top;
    char array[100];
}s;

void append(char x){
    array[
}
void push(char x){
    if (s.top==99){
        printf("Overflow");
    }
    else {
        s.top++;
        s.array[s.top] = x;
    }
}

char pop(){
    char x;
    if (s.top==-1){
        printf("Underflow");
    }
    else {
        x = s.array[s.top];
        s.top--;
    }
    return x;

}
int main(){
    char exp[] = "((a+b)*(c-d))";
    char arr[100];
    for (int i=0;i<sizeof(exp);i++){
        if (exp[i]=="("){
            push("(");
        }
        else if (exp[i]==")"){
            char sign = pop();
            while (sign!="("){
                arr[i] = sign;
                sign = pop();
            }
        }

        else if (exp[i]=="")

        else {
            arr[i]=exp[i];
        }
    }
    return 0;
}
