#include<stdio.h>
#include<complex.h>
#define PI 3.1416

int main ()
{
double z1real, z1imag;
double z2real, z2imag;

printf ("Enter the real part of Z1: ");
scanf ("%lf", &z1real);
printf ("Enter the Imaginary part of Z1: ");
scanf ("%lf", &z1imag);

printf ("Enter the real part of Z2: ");
scanf ("%lf", &z2real);
printf ("Enter the Imaginary part of Z2: ");
scanf ("%lf", &z2imag);

double _Complex cz1 = z1real + z1imag*I;
double _Complex cz2 = z2real + z2imag*I;
double _Complex sumcomplex = cz1+cz2;
double modulus = cabs(sumcomplex);
double angle = carg(sumcomplex);
double angle_degree = (angle) * 180.0 / PI;


printf ("The complex number Z1 is: %.2f +%.2fi\n", creal(cz1), cimag(cz1));
printf ("The complex number Z2 is: %.2f +%.2fi\n", z2real, z2imag);
printf ("The sum of the Z1 and Z2 is %.2f+%.2fi\n", creal(sumcomplex), cimag(sumcomplex));
printf ("The Modulus of the Vector is %.2f the Angle in Degrees is %.2f , and the Angle in radians: %.2f rad\n", modulus, angle_degree, angle);

return 0;
}
