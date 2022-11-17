#include<stdio.h>
#include<string.h>

int main (){
	char NickName[30];
	char CopyNickName[30];
	
	printf("Enter your NickName:\t");
	gets(NickName);
	
	//String Copy
	strcpy(CopyNickName,NickName);
	
	printf("Someone's NickName is %s.",CopyNickName);
	return(3);
}
