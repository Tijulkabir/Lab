//Tijul Kabir Toha
//240115

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d" ,&n);

    if (n>0)
    {
        printf("Number %d is positive \n" ,n);

    }

    else if (n<0)
    {
        printf("Number %d is Negative. \n " ,n);

    }
    
    else
    {
        printf("Number is zero \n" ,n);

    }
    return 0;
}