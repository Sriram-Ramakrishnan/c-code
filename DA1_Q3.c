#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char letter;
    printf("Enter the letter :");
    scanf("%c", &letter);
    if (letter == 'a'||letter == 'e'||letter == 'i'||
        letter == 'o'||letter == 'u'||letter == 'A'||
        letter == 'E'||letter == 'I'||letter == 'O'||letter == 'U'){

        printf("%c is a vowel",letter);}
    else{
        printf("%c is a consonant",letter);}
    return 0;
}

