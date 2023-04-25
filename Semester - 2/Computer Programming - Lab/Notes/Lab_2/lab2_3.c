// write a program to print table of 5

#include<stdio.h>

void main(){
	int x=1;
	/*for(x=1; x<=10; x++)
		printf("	5 * %d = %d\n", x, 5*x);*/
	while(x<=10){
		printf("	5 * %d = %d\n", x, 5*x);
		x++;
	}
}