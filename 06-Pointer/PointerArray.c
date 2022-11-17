#include<stdio.h>

int main(){
	
	int x[4]={7,50,101,456};  
				/*  x[0]=7;
					x[1]=50;
					x[2]=101;
					x[3]=456;
				*/
	
	int j , *ip;
	ip = &x[0];

	for(j=0;j<=3;j++){
		printf("The value of ip is %d.\n",*ip);
		ip++;
	}	
	
	return(3);
}
