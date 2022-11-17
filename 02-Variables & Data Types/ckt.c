#include<stdio.h>
int main(int argc, char const *argv[])
{

float v1,r1,r2,I,req;
	printf("Enter the value of voltage applied(in volts):-\t");
	scanf("%f",&v1);
	printf("Enter the value of resistance of 1st Resistor(in ohm):-\t");
	scanf("%f",&r1);
	printf("Enter the value of resistance of 2nd Resistor(in ohm):-\t");
	scanf("%f",&r2);
	req=(r1+r2);
	I=v1/req;

printf("The value of current flowing in the ckt is %f A",I);

	return 0;

}