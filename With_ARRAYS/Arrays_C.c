//Creates averages of a distribution with maximum 10 samples
#include<stdio.h>

int main ()
{
 double samples [10];
 int count =10;
 double sum = 0;
 double average = 0.0f;

 printf("\nEnter the number of samples: \n");

 for (int i = 0; i < count; ++i) // this for loop will be used to store the ten values, and every iteraction one more is added to the count variable
 {
     printf("%2u>", i + 1); // prints the index and count + 1, for every time is passes here one will be added, to display 2,3,4
     scanf("%lf", &samples[i]); // stores the double var in the samples array of index i, 1,2,3,4 positions of the array, starts in 0.
     sum += samples[i];
}

average = (double)sum/count;

printf ("The total average is %.2lf\n", average);

printf("Samples: "); // loop to display every element of the array
for(int i = 0; i < count; i++) {
    printf("%.2lf,", samples[i]);
}
printf("\n");

return 0;
}
