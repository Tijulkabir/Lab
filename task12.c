#include<stdio.h>

int main()
{
int r;
float area,circuma;


printf("Enter the radius:");
scanf("%d", &r);

area =3.1416*r*r;

printf("Area is:%f\n" ,area);


circuma=2*3.1416*r;

printf("Circumtances is:%f",circuma);

return 0;


}