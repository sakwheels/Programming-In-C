//Program to take user's name & Greet him/her.

/*       Basic Data Types In C
	int:1, 2, 5,67   2+3.2=5
	float:1.2, 3.23, 45.839    2.5+6.4=8.9 
	char:-A-Z a-z symbol [#@$%]
	

*/
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter Your FirstName:");
    scanf("%s",name);
    printf("\nHello %s! Welcome to the world of programming.\nHope you're enjoying.",name);
    return 0;
}

