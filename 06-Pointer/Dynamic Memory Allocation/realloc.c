        //realloc() in C:Here,you can change the size of previously allocated memory.
//Syntax: ptr= realloc(ptr, x);
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p;
	p= (char *) malloc(4*sizeof(char));
	strcpy(p, "C Programming");
	printf("Value is %s.\nIt's address is %u.\n",p, &p);

	if (p == NULL){
	printf("\nMemory Allocation Failed.");
	}
		else{
			p= realloc(p, 300*sizeof(char));
			strcpy(p, "C Programming Learning Session");
			printf("Value is %s.\nIt's address is %u.",p, &p);
    free(p);
	} 
    
    return 3;
}

