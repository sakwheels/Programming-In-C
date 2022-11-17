#include<stdio.h>
#include<string.h>
//string for uppercase.(strupr)
int main(){
	char datatype[25];
	
	printf("Enter any one basic DataType used in C Programming:\t");
	gets(datatype);
	
	printf("\nDataType in UpperCase is %s.",strupr(datatype));
	
	return(3);
}
