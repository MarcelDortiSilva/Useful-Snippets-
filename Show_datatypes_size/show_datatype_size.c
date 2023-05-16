#include<stdio.h>
#include<stdlib.h>
//this snippet shows the datatype size in bytes, since depending on the Architecture of the hardware, those allocations may be different

int main ()
{

printf ("-----SCANREG-----by Marcel Dorti Silva - 2023---use at your own risk-----\n");
printf ("-----This app shows the size of datatypes in bytes in this current processor architecture-----\n");

printf ("The size of the int datatype is %zd bytes\n", sizeof(int));
printf ("The size of the char datatype is %zd bytes\n", sizeof(char));
printf ("The size of the float datatype is %zd bytes\n", sizeof(float));
printf ("The size of the long datatype is %zd bytes\n", sizeof(long));
printf ("The size of the long long datatype is %zd bytes\n", sizeof(long long));
printf ("The size of the double datatype is %zd bytes\n", sizeof(double));
printf ("The size of the long double datatype is %zd bytes\n", sizeof(long double));

printf ("The processor used to run is instructions is: \n");

system("C:/Windows/System32/systeminfo");// oh nice instruction, and works in Windows too.

getchar();

return 0;

}
