#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// let us test here some string functions that work with pointers, which are just memory addresses to be used in C, those memory address contains values, those memory addresses
// can be used by functions to transfer values from those memory addresses to the actual variables in the c main routine.
//This here teaches a little about pointers in the string

int main()
{
char name[50];
char r = 'r';
char substring[100];
char *pGotchar = NULL; //pointer = null for Gotchar
char *pFound = NULL; //pointer = null for Found
char *token; // to be used in Strtok

printf ("Type the string, preferably a name: "); // insert a string
fgets(name, sizeof(name), stdin); // use fgets to read the string
name[strcspn(name, "\n")] = 0; // remove the newline character read by fgets

printf ("Enter the substring to be searched: ");
fgets(substring, sizeof(substring), stdin); // use fgets to read the string
substring[strcspn(substring, "\n")] = 0; // remove the newline character read by fgets

pFound = strstr (name, substring);
pGotchar = strchr (name, r); // use string character to look for r , in name, - and return an address of the pointer, in which the r value is stored.

printf ("The char R value is %d\n", r);
printf ("The substring content is %s\n", substring);

token = strtok(name, " "); // string to token, tokens are strings separated by delimiters, here the delimiter is space " ";
 while( token != NULL ) {
        printf( " %s\n", token );

        token = strtok(NULL, " ");
    }

    return 0;
}
