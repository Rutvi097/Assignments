#include<stdio.h>
int main()
{
      float a,b;

      printf("Enter First Number: ");
      scanf("%f",&a);

      printf("Enter Second Number:");
      scanf("%f",&b);
    
      printf("\n Addition = %.2f", a + b);
      printf("\n Subtarction = %.2f", a - b);
      printf("\n Multiplication + %.2f", a * b);

      if (b !=0)
      {
        printf("\n Division = %.2f", a / b);
      }
      else 
      {
         printf("\n Division is not possible.");
      }
      return 0;

}