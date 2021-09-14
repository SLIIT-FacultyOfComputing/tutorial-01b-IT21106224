/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main() {
	int n,counter;
	int sum=0;
  
	printf("Enter the n : ");
	scanf("%d",&n);

	sum = (n * (n + 1)) / 2;

	printf("The sum is: ");

	for (counter =1;counter <= n;counter++) {
		if (counter!=n)
		             printf("%d + ",counter);

     else
		             printf("%d = %d ",counter,sum);
	}
	return 0;
}
