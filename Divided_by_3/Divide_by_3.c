//This snippet is for us to show all the divisible per 3 numbers
#include<stdio.h>

int main()

{
int target, nondiv3=0, countdiv3=0;

printf("Please, enter the target number: ");
scanf("%d", &target);

int divisibleby3[target], nondivisibleby3[target]; // sets an array of index = target

for (int i = 1; i <= target; i++)
{
   if (i%3 ==0) /* This expression is called a compound assignment operator.
    It assigns the value of the i variable to the element at the countdiv3 index in the divisibleby3 array and then increments the countdiv3 variable by 1.*/
    {
     divisibleby3[countdiv3++] = i;
    //countdiv3 ++;
    //printf ("The divisible by 3 number is: %d\n", i);
     }
    else
    {
    nondivisibleby3[nondiv3++] = i;
      //nondiv3 ++;
      //printf ("The non-divisible by 3 number is: %d\n", i);
    }

}
printf("The number of numbers divisible per 3 from 0 to %d is %d\n", target, countdiv3);
printf ("Not divisible by 3 from 0 to %d is %d\n", target, nondiv3);

//Display the array of divisible by 3 numbers
for (int i = 0; i < countdiv3; i++) // when i = 0, and i less than countdiv3, (reached the end) display the array
{
    printf ("The numbers divisible by 3 are : %d\n", divisibleby3[i]);
}

//Display the array of non-divisible by 3 numbers
for (int i = 0; i < nondiv3; i++)
{
printf ("The numbers non-divisible by 3 are : %d\n", nondivisibleby3[i]);
}

return 0;
}
