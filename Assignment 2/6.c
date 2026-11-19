#include<stdio.h>
 
int main()
{
     int m1, m2, m3, total;
     float average;

     printf("Enter marks of three subjects : ");
     scanf("%d %d %d", &m1, &m2, &m3);

     total = m1 + m2 + m3;
     average = total / 3.0;

     printf("\n Total Marks = %d", total);
     printf("\nAverage = %.2f", average);

     if (m1 < 35 || m2 < 35 || m3 < 35)
     {
          printf("\nGrade : Fail");
     }
     else if (average >= 70)
     {
          printf("\nGrade : Distinction");
     }
     else if (average >=60)
     {
          printf("\nGrade : First Class");
     }
     else if (average >=50)
     {
          printf("\nGrade : Second class");
     }
     else if (average >=35)
     {
          printf("\nGrade : Third Class");
     }
     else
     {
          printf("\nGrade : Fail");
     }
      return 0; 

}