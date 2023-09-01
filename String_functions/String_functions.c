#include <stdio.h>

//this function will count the number of characters in a string, without using the strlen function

int StringLen(char string1[])
{
int countchar=0;
/*
for (countchar=0; string1[countchar] != '\0'; ++countchar)
;
return countchar;

or

*/while (string1[countchar] != '\0') // count string1 array until null line indicator, and increments count, while different than null line
{
    countchar++;
}
return countchar;
}

int CountA (char string1[]) // this function counts how many 'a' the string has
{
int count=0, counta=0;

while (string1[count] != '\0') // count string1 array until null line indicator, and increments count, while different than null line
{
    count++;
    if (string1[count] == 'a')
    {
     counta ++;
    }
}

return counta;
}

void CatString(char result[], char string1[], char string2[]) // concatenate string 1 and string 2
{
int i, j;

for (i=0; string1[i] != '\0'; i++ )
{
   result[i] = string1[i];
}

 result[i] = ' ';
    i++;
for (j=0; string2[j]!='\0'; j++)
{
    result[i+j] = string2[j];
}
result[i+j]= '\0';
}

int AreStringEquals (char string1[], char string2[])
{
 int i=0;

 for (i = 0; string1[i] != '\0'; i++)
 {
  if (string1[i] != string2[i])
    return 0;
 if (string2 [i] != '\0')
    return 1;
 }

return 1;
}


int main () // start of main routine
{
char stri1[200], stri2[200]; // defines array for the string to be inserted
char stringres[400];
int count =0, countaa =0; // variable to store the count
int stringequals = 0;

printf ("Insert the string 1:"); // human insert
scanf ("%s" , stri1);
printf ("Insert the string 2:"); // human insert
scanf ("%s" , stri2);
count = StringLen(stri1); // call StringLen function
countaa= CountA(stri1); // call Count A function
CatString(stringres, stri1, stri2);
stringequals= AreStringEquals (stri1, stri2);
printf ("The count of the string is %d and the number of a: %d \n", count, countaa);
printf ("The 2 strings together are: %s \n", stringres);
printf ("Are the Strings equal %d", stringequals);

return 0;
}
