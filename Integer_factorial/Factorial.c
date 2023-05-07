#include<stdio.h>
#include<string.h>

/* This program is to calculate the factorial (!) of a number*/
/**/

int main ()
{
int i, integer;
unsigned long long factorial = 1; //maximum factorial to be stored is 20! (2.432.902.008.176.640.000)

printf("Enter the integer to know the factorial (!):");
scanf ("%d", &integer);
if (integer == 0)
{
    printf ("1 by definition");
}
else if(integer != 0)
{
   for (i = 1; i <= integer ; i++)
    factorial = factorial*i;
}
printf ("The Integer number is: %d the Factorial is %llu\n", integer, factorial);
double value_in_float = (double)factorial; // type casting to double
printf("The Factorial value in scientific notation is %10.5e", value_in_float);
    return 0;
}

