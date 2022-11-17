#include<stdio.h>
#include<string.h>
//string for reverse.(strrev)
int main(){
	char datatype[25];
	
	printf("Enter any one basic DataType used in C Programming:\t");
	gets(datatype);
	
	printf("\nDataType in Reverse Mode is %s.",strrev(datatype));
	
	return(3);
}
