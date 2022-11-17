#include<stdio.h>
#include<math.h>
int main()
{
int numb;
	//speed dial
	printf("Enter the value of number of your keypad:-");	
	scanf("%d",&numb);
	
	switch(numb) {
			case 1 : printf(" Saved contact is 'MUM' ");
			break;
			case 2 : printf(" Saved contact is 'DAD' ");
			break;
			case 3 : printf(" Saved contact is 'DIDI' ");
			break; 
			case 4 : printf(" Saved contact is 'DAI' ");			
			break;
			default:
				printf("Invalid option");
			}
	return(1);
}
