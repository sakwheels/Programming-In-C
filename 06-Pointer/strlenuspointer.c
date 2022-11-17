#include<stdio.h>
#include<string.h>
//finding string length using pointer.
int stringlen(char *pt);
int main(){
	char datatype[25];
	
	printf("Enter any one DataType used in C Programming:\t");
	gets(datatype);
	
	printf("\nThe Total Length of the string is %d",stringlen(datatype));
	return(3);
}

int stringlen(char *pt){
	int sak=0;
	while( *pt != '\0'){
		sak++;
		pt++;
	}
	
return sak;
}
