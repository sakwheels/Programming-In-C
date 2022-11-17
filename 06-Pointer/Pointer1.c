#include<stdio.h>
//Pointer:-It is a variable that contain address of other variable.
int main(){
	/*int a = 12;
	int *p;
	p = &a;
	int X = *p;
	
printf("The value of a is %d.\n",a);	
printf("The value of p is %d.\n",p);
printf("The value of X is %d.",X);*/

int fn , sn , *a , *b, sum, difference, product, division, modulus;
printf("Enter the 1st number:-\t");
scanf("%d",&fn);
printf("Enter the 2nd number:-\t");
scanf("%d",&sn);

a=&fn;
b=&sn;

sum=(*a + *b);
difference=(*a - *b);
product=((*a) * (*b));
division=(*a / *b);
modulus=(*a % *b);

printf("\nThe sum of two input number is %d\n",sum);
printf("\nThe difference of two input number is %d\n",difference);
printf("\nThe product of two input number is %d\n",product);
printf("\nThe division of two input number is %d\n",division);
printf("\nThe modulus of two input number is %d\n",modulus);

printf("\nThe address of a is %d\n",a);
printf("The address of b is %d\t",b);

	return(0);	
}
