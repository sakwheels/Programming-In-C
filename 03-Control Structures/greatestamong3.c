#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num1=20, num2=43 ,num3=45, num4=67;
	if(num1>num2 && num1>num3 && num1>num4)
	{
		printf("num1 is the greatest among four numbers.");
			}		
	else if (num2>num1 && num2>num3 && num2>num4)
	{
		printf("num2 is the greatest among four numbers.");
		}	
	else if (num3>num1 && num3>num2 && num3>num4)
	{
		printf("num3 is the greatest among four numbers.");
		}	
	else 
	{
		printf("num4 is the greatest among four numbers.");
		}
	return(0);	
}
