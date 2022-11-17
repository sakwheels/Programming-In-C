#include<stdio.h>
#include<math.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
//void multiply(int a,int b);
int division(int a,int b);
int getsquare(int num);
void main()
{
	int fn, sn,numb;
	printf("Enter 1st number:-\t");
	scanf("%d",&fn);
	printf("Enter 2nd number:-\t");
	scanf("%d",&sn);
	printf("Enter a number to be squared:-\t");
	scanf("%d",&numb);
	
	printf("The sum is %d.\n",add(fn,sn));
	printf("The difference is %d.\n",subtract(fn,sn));
	printf("The product is %d.\n",multiply(fn,sn));
	//multiply(fn,sn);
	printf("The division is %d.\n",division(fn,sn));
	printf("The square of numb is %d.\n",getsquare(numb));
}

int add(int a,int b)
{
	int sum=a+b;	
	return sum;	
}

int subtract(int a,int b)
{
	int sub=a-b;	
	return sub;
}

int multiply(int a,int b)
{
	int multi=a*b;
	//printf("multi=%d",multi);
	return multi;
}

int division(int a,int b)
{
	int divi=(a/b);
	return divi;
}

int getsquare(int num)
{
	return num*num;
}
