#include<stdio.h>
#include<string.h>

int main(){
	char subjectname[25];
	int tolength;
	printf("Enter your favourite subject in this semester:\t");
	gets(subjectname);
	
	//finding string length
	tolength = strlen(subjectname);
	printf("The total length of %s is %d.",subjectname,tolength);
	
	return(0);
}
