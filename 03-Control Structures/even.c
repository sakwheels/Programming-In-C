#include<stdio.h>
#include<math.h>
int main()
{
	int num=220, i;
	printf("The even number between 150 & 220 are: \n");
	for(i=151;i<num;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		
	}
	
	/*printf("Enter the number:\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The given number is even.");
	}
	else
	{
		printf("The given number is odd.");
	}*/
	
	return(0);
}
