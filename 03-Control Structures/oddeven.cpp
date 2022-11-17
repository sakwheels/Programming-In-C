#include<stdio.h>
#include<math.h>
int main()
{
int num;
	//speed dial
	printf("Enter the value of number of your keypad:-");	
	scanf("%d",&num);
	/*if (number%2==0)
	{
		printf("The number is even.");
	}
	else{
		printf("The number is odd.");
	}*/
	
	//check the number using switchcase
		switch (num) {
			case'1': printf("Mum");
			case'2': printf("Dad");
			case'3': printf("Didi");
			case'4': printf("Jantare");
			
			
			/*char grade;
	printf("Enter your grade:-");
	scanf("%s",&grade);
   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
         printf("Well done\n" );
         break;
      case 'C' :
         printf("You passed\n" );
         break;
      case 'D' :
         printf("Better try again\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
   
   printf("Your grade is  %c\n", grade );*/
}
return(1);	
}
