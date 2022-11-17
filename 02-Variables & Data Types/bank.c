#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,TotalAmt;
	printf("Enter the number of notes of Rs.1000\n");
	scanf("%d",&n1);
	printf("Enter the number of notes of Rs.500\n");
	scanf("%d",&n2);
	printf("Enter the number of notes of Rs.100\n");
	scanf("%d",&n3);
	printf("Enter the number of notes of Rs.50\n");
	scanf("%d",&n4);
	printf("Enter the number of notes of Rs.20\n");
	scanf("%d",&n5);
	printf("Enter the number of notes of Rs.10\n");
	scanf("%d",&n6);
	printf("Enter the number of notes of Rs.5\n");
	scanf("%d",&n7);
	printf("Enter the number of coins of Rs.2\n");
	scanf("%d",&n8);
	printf("Enter the number of coins of Re.1\n");
	scanf("%d",&n9);

	TotalAmt=(1000*n1)+(500*n2)+(100*n3)+(50*n4)+(20*n5)+(10*n6)+(5*n7)+(2*n8)+(1*n9);

printf("TotalAmt Saxyam has=Rs.%d",TotalAmt);

	return (0);
}