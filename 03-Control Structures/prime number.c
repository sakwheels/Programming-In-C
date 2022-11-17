#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
	/*int num,i,c=0;
	printf("The prime number from 1 to 50:-\n");
	for(num=1;num<=2000;num++)
	{
		if(i) 	

	}*/
	int i,c=0,num;
	printf("Enter the number:\n");
	scanf("%d",&num);

	for (i=1;i<=num;i++)
	{
		if(num%i==0)
		{
		c=c+1;	
		}		
	}
		if (c==2){
			printf("It's a prime number.");
		}
 		else
		 {
		 	printf("It's a composite number.");
		 	}



	return(0);
}
