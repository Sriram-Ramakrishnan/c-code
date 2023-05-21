#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char name[50];
    char line[50];
    printf("");
    scanf("%c", &ch);
    printf("");
    scanf("%s",name);
    printf("");
    scanf("\n");
    scanf("%[^\n]%*c",line);

    printf("%c\n",ch);
    printf("%s\n",name);
    printf("%s",line);

    return 0;
}



