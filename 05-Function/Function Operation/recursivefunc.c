//Recursive Function:Call to same function.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int num);
int main()
{
	int number;
	printf("Enter the value of number:-");
	scanf("%d",&number);
	
	printf("The factorial of input number is %d",factorial(number));
	return(0);
}

int factorial(int num)
{
	if(num == 1)
	{
		return 1;
	}
return (num * factorial(num-1));	
	
}
