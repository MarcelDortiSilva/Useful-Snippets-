#include<stdio.h>

int main ()
{
//first program with pointers
// Let us create a variable, and a pointer to it, use will enter a value that is stored in the value, the value is referenced to a pointer,

int number = 0;
int *pointer = &number;
int result =0;

printf ("Enter the value to be stored: "); //enter the value
scanf ("%d", &number); // store the value in number

result = *pointer +5;
//result = number + 5; - comparison of using the same program without pointers, with pointer is around 20% faster.

printf ("\nThe value of result is %d", result);
printf ("\nThe memory address of *pointer is %p",(void*)&pointer);
printf ("\nPointer's size: %d bytes\n", (int)sizeof(pointer));
printf ("Value pointed to: %d", *pointer);

return 0;
}
