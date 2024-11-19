#include<stdio.h>
int main()

{

int a,b,sum,sub,mul;

float div;


printf("Enter the first number:");
scanf("%d", &a);

printf("Enter the second number:");
scanf("%d", &b);

sum=a+b;

printf("%d%d =%d\n" ,a,b,sum );

sub=a-b;
printf("%d%d =%d\n" ,a,b,sub);

mul=a*b;

printf("%d%d =%d\n" ,a,b,mul);

 div=(float) a/b;
 printf("%d%d =%.2f\n" ,a,b,div);

return 0;



}