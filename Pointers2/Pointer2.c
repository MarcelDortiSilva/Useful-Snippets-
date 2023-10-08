#include <stdio.h>
#include <stdlib.h>

//Initialize a pointer,
//Assign a pointer,
//access a pointer,

//Write a program that creates an integer variable with a hard-coded value.
//Assign that variable´s address to a pointer variable

//Display output the address of the pointer, the value of the pointer, and the value of
//what the pointer is pointing to.

int main()
{
 int var = 70, Valueadd=0, result=0;
 int *pvar = NULL;
 pvar = &var;
 //int *pvar = &var;
 char Op1;


 //int *pvar2 = &var;

printf ("Would you like to add a value to the value in the pointer? Y/N");
scanf (" %c", &Op1);

if (Op1 == 'Y' ||  Op1 == 'y')
{
 printf ("Enter the value to be added:(0-10):");
 scanf("%d", &Valueadd);
 result = *pvar + Valueadd;
}
else if (Op1 == 'N' || Op1 == 'n')
{
result = *pvar;
}

printf("The value of the pointer is: %d", result);
printf ("\nThe output address of the pointer is: %p", (void*)&pvar);
printf ("\nThe Value pointed is: %d, The size of the pointer pvar is %d bytes:", *pvar, (int)sizeof(pvar));



    return 0;
}

