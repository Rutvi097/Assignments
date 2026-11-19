#include<stdio.h>

  int main()
  { 
     int a, b, sum;
     printf("Enter First number: ");
     scanf("%d", &a);

     printf("Enter Second number: ");
     scanf("%d",&b);

     sum = a + b;

     printf("Addition = %d",sum);
     
     return 0;
  }