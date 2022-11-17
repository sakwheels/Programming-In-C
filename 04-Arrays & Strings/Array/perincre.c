#include<stdio.h>
int main(){
	char place[12][30]={"Kathmandu to Biratnagar",
	"Kathmandu to Simara","Kathmandu to Lukla","Kathmandu to Pokhara",
	"Pokhara to Jomsom","Kathmandu to Jomsom","Biratnagar to Kathmandu",
	"Simara to Kathmandu","Lukla to Kathmandu",
	"Pokhara to Kathmandu","Jomson to Pokhara","Jomsom to Kathmandu"
	
	};
	float fare[12]={5000,3000,3500,2000,5500,7500,4000,3500,
		4000,1500,3500,5000},incre;
	int i;
	printf("Enter the increase percentage of the petroleum: ");
	scanf("%f",&incre);
	printf("The new fare for the flights are: \n");
	for (i=0;i<12;i++){
		fare[i]=((incre*fare[i]/100))+fare[i];
		printf("%s = %.2f\n",place[i],fare[i]);
	}

	return 0;
}
