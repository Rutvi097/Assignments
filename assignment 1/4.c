#include<stdio.h>
int main()
{
    float a, b, div;

    printf("Enter First number : ");
    scanf("%f",&a);

    printf("Enter Second number :");
    scanf("%f",&b);

    if (b !=0)
     {
        div = a / b;
        printf("Division = %.2f",div);

     }
     else
     {
         printf("Division by zero is not possible");

     }
     


    
    return 0;

}