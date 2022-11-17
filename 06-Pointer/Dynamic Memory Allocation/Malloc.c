                   //malloc in C
/*Syntax:
         ptr=(CastType*) malloc(size);
    E.g:- ptr = (int*) malloc(100 * sizeof(float)); */
    
#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, i, *p;
	printf("Enter the size of array:\t");
	scanf("%d",&a);
	
	p= (int *)malloc(a* sizeof(int)) ;
	
	if (p == NULL){
		printf("\nMemory Allocation Failed.");
	}
	else{
		for(i=0;i<a;i++){
			printf("Enter the value of p[%d]:\t",i+1);
			scanf("%d",&p[i]);
		}
		
			for(i=0;i<a;i++){
			printf("\n%d is the value and %d is the address.\n",p[i], &p[i]);
			
		}
		
	}
	free(p);
	
	return(3);
}
