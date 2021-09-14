/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mar1,mar2;
  int total;
  float avg;


  printf("Input marks1 Input marks2 :");
  scanf("%d%d",&mar1,&mar2);

 total=mar1+mar2;
 printf("The total is %d\n",total);
 
 avg=total/2;
 printf("The total avg is %f\n",avg);

  return 0;
}

