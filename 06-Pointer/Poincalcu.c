#include<stdio.h>
//Pointer:-It is a variable that contain address of other variable.
int main(){

int n, *a , *b, sum, difference, product, division, modulus;
printf("Enter the number for the operation:-\t");
scanf("%d",&n);

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



	return(0);	
}
