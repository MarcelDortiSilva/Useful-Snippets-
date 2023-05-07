#include<stdio.h>
#include<string.h>

int main ()
{
char temp_option;
float temp_in, temp_celsius, temp_fa;
temp_celsius=0;
temp_in=0;
temp_fa=0;

printf ("----This snippet converts Celsius Degrees to Fahrenheit Degrees and vice-verse----\n");
printf ("Enter the input temperature: ");
scanf ("%f", &temp_in);
printf("Conversion ---Fahrenheit to Celsius F-> C (F), OR ---(C) C->F Celsius to Fahrenheit---\n");
scanf(" %c", &temp_option);

if (temp_option=='F' || temp_option=='f')
{
temp_celsius = ((temp_in) * 9/5) + 32; //converts temp_in (Fahrenheit) to Celsius
printf("Temperature in Celsius from the Fahrenheit Input: %.2f Celsius\n", temp_celsius);
}
else if (temp_option=='C' || temp_option=='c' )
{
temp_fa= temp_in * 9/5 + 32; //converts temp_in (Celsisu) to Fahrenheit
printf("Temperature in Fahrenheit from Celsius Input: %.2f Fahrenheit\n", temp_fa);
}
else
{
  printf("Invalid");
}
return 0;
}



