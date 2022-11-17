#include<stdio.h>
#include<string.h>
//string for lowercase.(strlwr)
int main(){
	char datatype[25];
	
	printf("Enter any one basic DataType used in C Programming:\t");
	gets(datatype);
	
	printf("\nDataType in LowerCase is %s.",strlwr(datatype));
	
	return(3);
}
