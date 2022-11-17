#include<stdio.h>
#include<string.h>
//string comparison.(strcmp/strcmpi)
int main(){
	char fstword[25];
	char sndword[25];
	
	printf("Enter your 1st Word:\t");
	gets(fstword);
	
	printf("Enter your 2nd Word:\t");
	gets(sndword);
	
	if(strcmpi(fstword,sndword)==0){
		printf("\nThe string are equal to each other.");
	}
	else{
		printf("\nThe string aren't equal to each other.");
	}
	
	return(3);
}
