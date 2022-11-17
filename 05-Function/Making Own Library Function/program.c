#include<stdio.h>
#include"header.h"
void main(){
	int n1,n2,n;
	printf("Enter the 1st number:\t");
	scanf("%d",&n1);
	printf("Enter the 2nd number:\t");
	scanf("%d",&n2);
	
	printf("The modulus of two input number is %d.\n",modulus(n1,n2));
	//return(3);
}
