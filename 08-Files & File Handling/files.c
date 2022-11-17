/*                      File:-A document that contain data.
-Creating a file
-Reading a file
-Writing a file
-Updating a file 

- r: > read mode    r+ :reading + writing
- w: > write mode   w+ :writing + reading
- a: > appent mode  a+ : update,reading,appending
*/
#include <stdio.h>
//fgetc() , fputc();
int main(){
	FILE *fp;
	char ch;

	fp = fopen("sak.txt","r+");
	if(fp == NULL){
		printf("Error!No file found.");
	}
	
	
	while(ch != EOF){
		ch = fgetc(fp);
		printf("%c",ch);
	}	

    return 3;
}

