/*Problem to find absolute value of given integer*/
//header files
#include<stdio.h>
//main function
int main(){
    int x,res;
    printf("Enter any number:\n");
    scanf("%d",&x);
    if (x>=0) res=x;
    else res=x*(-1);
    printf("The absolute value of %d is %d.",x,res);
    return 0;
}
