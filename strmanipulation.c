#include <stdio.h>

#include <conio.h>

#include <string.h>

void main()

{

//program using string handling functions

char name[10],name1[10],temp[10],ch;

int opt;

do

{

printf("\n enter the first string:");

fflush(stdin);

gets(name);

fflush(stdin);

printf("\n enter the second string:");

gets(name1);

printf("\n 1. Concat 2.length 3.Reverse 4. Copy 5. Compare");

printf("\n enter your option:");

scanf("%d",&opt);

switch(opt)

{

case 1 : printf("\n the concatenated string is: %s",strcat(name,name1));
break;

case 2: printf("\n the length of the 1st string is %d",strlen(name));
printf("\n the length of the sec string is %d",strlen(name1));
break;
case 3: printf("\n reverse of the string first is %s",strrev(name1));

break;

case 4: printf("\n string copied to new string is %s",strcpy(temp,name1));

printf("\n the new string is %s",temp);

break;

case 5: if (strcmp(name,name1)==0)

{

printf("\n the two strings are equal:");

}

else

{

printf("\n not equal:");

}

break;

}

printf("\ndo u want to continue('y' for Yes, 'n' for no ) : ");

fflush(stdin);

scanf("%c",&ch);

printf("the option is %c",ch);

}

while(ch=='y'|| ch=='Y');

}

