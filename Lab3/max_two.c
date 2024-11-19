//Tijul Kabir Toha
//240115

#include<stdio.h>

int main()
{
    printf("This is  a problem about finding the maximum from two numbers\n");
    int first_num, second_num;

    printf("Enter your first number: ");
    scanf("%d", &first_num);

    printf("Enter your second number: ");
    scanf("%d", &second_num);

    if (first_num > second_num)  
    {
        printf("%d is max number. \n", first_num);
    } 
    else if (second_num > first_num)
    {
        printf("%d is max number. \n", second_num);
    } 
    else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
