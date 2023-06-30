#include<stdio.h>
#include<math.h>
#include<stdbool.h>
//this program finds prime numbers by the usage of the Trial division method, from 2 - 1000
//The 100th prime number is 541, which is well within the range of an int (-2,147,483,648 to 2,147,483,647)
//method for primes check
//Trial Division: This is the simplest method.
//You check if the number can be divided without remainder by any integer from 2 to its square root. If there's no such number, the number is prime.

int main ()
{
int primes [168]; //sets the array for the primes
      primes [0] = 2; // sets 2 in index 0
      primes [1] = 3; // set 3 in index 1
int primeindex = 2, primerange; // the next number will be shifted +2 in the array - offset
bool isprime; // identifies the number is prime
float testlimit; // the limit of the test, connected to the Trial division method

printf ("This snippet finds prime number from 2 - 1000\n");
printf ("Enter the prime range [2-1000]: ");
scanf ("%d", &primerange);

if (primerange < 2 || primerange >1000)
{
    printf ("Data out of range, run the program again, and insert a number in the data range");
    return 0;
}
else
{
for (int i=4; i < primerange; i++) // starting at 4, until 100, - let us get i and take sqrt of it, this is the limit of our iteration test to check if it is a prime
{
    testlimit = sqrt(i); // sets the limit
    isprime= true; // assumes ist prime to be true

    for (int count = 2; count <= testlimit; count++) // this for loop is the loop that tests that every i element is prime or not.
    {
        if (i % count == 0) // if i divided by count == 0, that means the number is divisible evenly, not a prime
        {
         isprime = false;
         break;
         }
    }

    if (isprime) // if this does not happen, for all the numbers until the testlimit, which is the sqrt of the i number selected, it is a prime
    {
    primes[primeindex] = i; // then we should add this number to the array primes, shifted by primeindex (2)
    primeindex++; // let us add one to the primeindex, for the next iteration the next number comes in the right position
    }

}

printf("\nPrime numbers found:\n"); // print all the numbers, and show in every iteration, an element of the primes array, from index = 0 to the last position of the primeindex array.
    for (int i = 0; i < primeindex; i++)
    {
        printf("%d ", primes[i]);
    }
}

 return 0;
}


