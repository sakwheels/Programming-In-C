#include<stdio.h>
#include<string.h>
//String Concatenation
int main(){
	char fullname[35];
	char company[25];
	char model[25];
	int cc;//CubicCapacity 
	
	printf("Enter your automobile product COMPANY:\t");
	gets(company);
	printf("Enter your automobile product MODEL:\t");
	gets(model);
	printf("Enter your automobile product CUBIC CAPACITY:\t");
	scanf("%d",&cc);
	
	printf("\nThe FullName of your AutoProduct is %s %dcc.",strcat(company,model),cc);

	return(0);
}
