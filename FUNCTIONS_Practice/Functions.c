#include<stdio.h>

//this snippet deals with functions
// function for CGD (Greatest Common Divisor)
// function for Making a number positive Make Absolute
// function for Calculating Square Root without math.h library, using Newtonian method
// in the main function, user is requested to insert data, and will be shown the output variables

//GCD Function
int GCD (int a, int b)
{
    int temp=0;
    if ( a > b)
    {
    temp = a;
    a = b;
    b = temp;
    }
   while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

//Make Absolute Function
double MakeABS (double x)
{
if (x < 0)
    x = x*-1;

return x;
}

//Newtonian Square-root Method
double SqrtNewton (double num)
{
double x = num;
double y = (x + 1) / 2;
while(y < x)
    {
      x = y;
      y = (x + (num / x)) / 2;
   }

   return x;
}



// Main routine
int main ()

{
int a=0, b=0, c=0;
double numneg=0, x=0, num=0, sqrtnum = 0;

//GCD
printf ("Enter the pair of number to extract the GCD (a ; b): ");
scanf ("%d ; %d", &a, &b);
c= GCD(a,b);

printf ("The GCD is %d\n", c);

//Make ABS

printf ("Enter a number to be made absolute: ");
scanf ("%lf", &numneg);
x = MakeABS (numneg);

printf ("The Absolute value is %.2lf\n", x);

//Calculate Newtonian Square-root method

printf ("Enter a number to know the Square Root:");
scanf ("%lf", &num);
if (num < 0)
{
   printf ("Negative Number: %.2lf \n", num);
}
num = MakeABS (num);
sqrtnum=SqrtNewton(num);


printf ("The Square root number is %.2lf", sqrtnum);
return 0;
}



