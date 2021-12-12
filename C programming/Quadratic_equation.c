#include<stdio.h>
#include<math.h>

int main()
{
     //ax^2+bx+c  //this is the quadratic equation and we want to find the root of this quadratic equation.

double a,b,c,r1,r2,real,imaginary;

printf("Enter the coefficients and constants[a,b,c] for ax^2+bx+c.\n");
printf("Enter a: ");
scanf("%lf",&a);
printf("Enter b: ");
scanf("%lf",&b);
printf("Enter c: ");
scanf("%lf",&c);

double discriminant;
discriminant=b*b-4*a*c;

if(discriminant>0)
{
    //real and different roots.
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b-sqrt(discriminant))/(2*a);
    printf("r1=%0.2lf\t\tr2=%0.2lf",r1,r2);
}
else if(discriminant==0)
{
    //real but same roots.
    r1=-b/(2*a);
    r2=r1;
    printf("r1=%0.2lf\t\tr3=%0.2lf",r1,r2);
}
else
{
    //different and imaginary roots.
    real=(-b/(2*a));
    imaginary=(sqrt(-discriminant)/(2*a));
    printf("r1=%0.2lf+%0.2lfi\t\tr2=%0.2lf-%0.2lfi",real,imaginary,real,imaginary);
}

}
