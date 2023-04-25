/* Print the below pattern
     *
   ***
  *****
*******
     *
     *
     *

*/
#include<stdio.h>
void main(){
	int i,j, n_l;
	printf("Enter number of lines: ");
	scanf("%d", &n_l);
	
	for(i=1; i<n_l+1; i++){
		for(j=i; j<n_l; j++)
			printf(" ");
		for(j=1;j<=(2*i)-1; j++)
			printf("*");
		printf("\n");
	}
	for(i=1; i<n_l; i++){
		for (j=1; j<n_l; j++)
			printf(" ");
		printf("*\n");
	}
}