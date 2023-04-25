#include<stdio.h>

int main(){
	float num1, num2, sum;
	printf("Enter 1st number: ");
	scanf("%f", &num1);
	printf("Enter 2nd number: ");
	scanf("%f", &num2);
	sum = num1 + num2;
	printf("Sum of %.2f and %.2f = %.2f\n", num1, num2, sum);	
	return 0;
}