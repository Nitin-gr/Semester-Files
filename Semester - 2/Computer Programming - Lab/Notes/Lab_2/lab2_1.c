// Write a program to find if a number is divisible by 7 or 11 or both.

#include<stdio.h>

void main(){
	int num1 = 12;
	if (num1%7 == 0 && num1%11==0)
		printf("Number is divisible by both 7 and 11\n");
	else if (num1%11 == 0)
		printf("Number is divisible by 11\n");
	else if (num1%7 == 0)
		printf("Number is divisible by 7\n");	
	else
		printf("Number is neither divisible by 7 nor by 11\n");
}