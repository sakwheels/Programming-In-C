                            //Call by Refrence(Pass by refrence)   pointer needed.
#include<stdio.h>
void drop(int *X); //function declaration(prototype)

void main(){
		int a=45;
		printf("Actual arguments=%d\n",a);
		
		drop(&a);	
		printf("Formal arguments=%d\n",a);
}

void drop(int *X){
	*X= ( (*X + 100) / 5);   //(45+100)/5 = 145/5 =29;
	
}
