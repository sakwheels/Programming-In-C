#include<stdio.h>
#include<conio.h>
#include<math.h>

//Array:-It can store multiple value of same type in same variable.

int main(){
	
	/*float price1=42.00;
	float price2=342.32;
	float price3=435.85;
	float price4=3.75;*/
	
	int num=6;
	int i;
	float price[num];
	for(i=0;i<num;i++)
	{
		printf("Enter the price for %d Product:-\t",i+1);
		scanf("%f",&price[i]);
	}
		for(i=0;i<num;i++)
		{
			printf("\n The price of %d Product is RS.%.2f \n",i+1,price[i]);
		}
	return(0);	
}

