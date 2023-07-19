#include<stdio.h>
#include<stdbool.h>
#include<math.h>

//test new functions

void multiplyTwoNumbers (int x, int y)
{
    int result = x * y;
    printf ("The Product of %d x %d is: %d\n", x, y, result);
}

void GeneratePrimeNumbers (int primerange)

{
 int primes [168]; //sets the array for the primes
      primes [0] = 2; // sets 2 in index 0
      primes [1] = 3; // set 3 in index 1
int primeindex = 2; // the next number will be shifted +2 in the array - offset
bool isprime; // identifies the number is prime
float testlimit; // the limit of the test, connected to the Trial division method

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

int main (void)
{
    multiplyTwoNumbers (10, 20);
    multiplyTwoNumbers (20, 30);
    multiplyTwoNumbers (50, 2);

    int rangepm;
    printf ("Prime number range: ");
    scanf ("%d", &rangepm);
    GeneratePrimeNumbers (rangepm);



getchar();
return 0;
}
