                            //Call by Value(Pass by value)    Pointer less
#include<stdio.h>
int drop(int x); //function declaration(prototype)

void main(){
		int a=45;
		printf("Actual arguments=%d\n",a);
		
 		drop(a);	
		printf("Formal arguments=%d\n",drop(a));
}

int drop(int x){
	x= ( (x + 100) / 5);   //(45+100)/5 = 145/5 =29;
	return x;	
}
