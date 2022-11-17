/*This program will calculate the mass of air pressure in automobile tyre*/
#include<stdio.h>
int main()
{
float P,V,T,m;

	printf("Enter the value of air pressure in the tyre(pounds per square inch)\n");
	scanf("%f,&P");
	printf("Enter the value of volume(in cubic feet)\n");
	scanf("%f,&V");
	printf("Enter the value of temperature(in Fahrenheit)\n");
	scanf("%f,&T");
	m=(P*V)/(0.37*(T+460));
	printf("The mass of air pressure in automobile tyre=%f",m); 
	
	return 0;
}