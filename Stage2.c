#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int num = 8;
    printf("\n");
    printf("pow(4,3) aka power fn = %f \n",pow(4,3));
    /*
    Variables : Containers where we can store data
    Use \  to nullify an already existing thing, Eg
    printf("Hello\"World");
    */

    // Constants: Immutable Variables

    printf("%d \n",num);
    printf("%s : %4.4f \n","Grade",78.90);

    int age;
    char name[25];

    printf("Whats your age?: ");
    scanf("%d", &age); // & - Pointer
    printf("Whats your name: ");
    fgets(name,25,stdin);
    /* Actually, fgets() is used in file obj reading but as it depends on pointer,
    you can assign the pointer as stdin to get the input */

    printf("Name: %s \n",name);

    // Variables : Containers where we can store data
    char cname[] =  "John";
    int cage = 35;
    printf("Name: %s\n",cname);
    printf("Age: %d\n",cage);
    printf("Hello world!\n");
    printf("Hello world!\n");

    return 0;
}
