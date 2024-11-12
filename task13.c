#include<stdio.h>
int main()
{

    float cent,meter,kilo;
printf("Enter the centimeter value :");
scanf("%f" ,&cent);
meter=cent/100;

 printf("Meter value is :%f\n",meter);


kilo=cent/1000;

printf("Kilo value is :%f" ,kilo);

return 0;
}