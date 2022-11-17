#include<stdio.h>
void swap(int *x, int *y);
int main(){
	int x, y;
	printf("Enter the value for x:\t");
	scanf("%d",&x);
	printf("Enter the value for y:\t");
	scanf("%d",&y);
	
	swap(&x, &y);
	printf("\nThe value of x=%d.\nThe value of y=%d.",x,y);
	return(3);
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;	
	
}
