#include<stdio.h>
#define conversion_rate 0.621371;
int main()
{
    float kmperhr,mileperhr;
    printf("Enter the velocity in Km/hr: ");
    scanf("%f",&kmperhr);

    mileperhr=kmperhr*conversion_rate;

    printf("%0.03f km/hr: %0.03f mile/hr",kmperhr,mileperhr);
    return 0;
}