//Tijul Kabir Toha
//240115

#include<stdio.h>

int main()
{
    printf("This is a problem about postive negative and zero number test.\n");
    int n;
    printf("Enter a Number : ");
    scanf("%d" ,&n);

    if (n>0)
    {
        printf("%d  is a positive number \n" ,n);

    }

    else if (n<0)
    {
        printf("%d  is a negative number  " ,n);

    }
    
    else
    {
        printf("Number is zero \n" ,n);

    }
    return 0;
}