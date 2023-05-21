#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Books
{   char title[50];
    char author[50];
    char subject[100];
    int book_id;
}; // book1,cook2; // Declaration of structure method 2
/** Accessing members in a structure:
    To assign like a 100 student structs
    We can create an array of structs
    Syntax: struct Book book1[100]; **/

struct date{
    int date;
    int month;
    int year;};

struct Employee
{
    char ename [20];
    int ssn;
    float salary;
    struct date doj;
}emp1;

int main(){
    struct Books books[4];///Declaration of structure method 1



    return 0;
}


