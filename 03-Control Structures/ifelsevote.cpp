//comparision of ifelse and ternary operator
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int age;
	printf("Enter your age:-");
	scanf("%d",&age);

age>=18 ? printf ("You are voter.") : printf ("You are not voter.");
	
/*	if (age>=18)
	{
		printf("YOU ARE ELIGIBLE TO VOTE IN THIS ELECTION");
	}
	
	else{
		printf("YOU ARE NOT ELIGIBLE TO VOTE IN THIS ELECTION");
	} */
	
	
	return(0);
}
