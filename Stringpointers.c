#include <stdio.h>
#include <string.h>



void main()
{
    char str[20], *ch;
    int i=0;
    printf("\n enter string:");
    scanf("%s", str);

    ///reverse_string(str);

    ch=str; /// Referencing pointer to the string(String is similar to array and hence can do the same)

    while(*ch!='\0'){
        i++ ;
        ch++;}
    printf("%d",i);
    reverseString(str);
    printf("%s",str);
}

void reverseString(char* str)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	// Get the length of the string
	l = strlen(str);

	// Set the begin_ptr and end_ptr
	// initially to start of string
	begin_ptr = str;
	end_ptr = str;

	// Move the end_ptr to the last character
	for (i = 0; i < l - 1; i++)
		end_ptr++;

	// Swap the char from start and end
	// index using begin_ptr and end_ptr
	for (i = 0; i < l / 2; i++) {

		// swap character
		swap(begin_ptr,end_ptr);

		// update pointers positions
		begin_ptr++;
		end_ptr--;
	}
}


void swap(char* m,char* n){
    char* k;
    *k = *m;
    *m = *n;
    *n = *k;
    //return m,n;

}

