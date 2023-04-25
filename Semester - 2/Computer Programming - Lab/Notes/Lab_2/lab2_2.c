// Write a program to find smallest of 3 numbers.

#include<stdio.h>

void main(){
	int num1, num2, num3, s;
	printf("Enter 1st number : ");
	scanf("%d", &num1);
	printf("Enter 2nd number : ");
	scanf("%d", &num2);
	printf("Enter 3rd number : ");
	scanf("%d", &num3);
	
	/*if(num1 < num2){ // 7,6,4
		if (num1<num3)
			printf("num1 is smallest");
		else if (num2<num3)
			printf("num2 is smallest");
		else
			printf("num3 is smallest");
	}*/
	
	/*s = num1; // 5,6,4
	if (num2<s && num2<num3)
		s = num2;
	else if (num3<s)
		s=num3;
	printf("%d is smallest\n", s);*/
	
	// using if else ladder
	if (num1< num2 && num1<num3)     
		printf("num1 is smallest\n");
	else if (num2<num3)
		printf("num2 is smallest\n");
	else
		printf("num3 is smallest\n");
	
	/*// Using if
	if (num1<num2 && num1< num3)
		printf("Num1 is smallest\n");
	if (num2<num1 && num2< num3)
		printf("Num2 is smallest\n");
	if (num3<num1 && num3< num2)
		printf("Num3 is smallest\n");*/
	
	
}