#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n,sum=0,dum=0;
    printf("Enter the number of operands for summation:");
    scanf("%d",&n);
    printf("\n");
    int *p;
	p=(int*)malloc(n*sizeof(int));
    
	for (i=0;i<n;i++){
        printf("Enter the %d number:",i+1);
        scanf("%d",&dum);
        p[i]=dum;
        sum+=p[i];
    }
    printf("\nThe sum of %d numbers is %d.",n,sum);
    free(p);
    return 0;
}
