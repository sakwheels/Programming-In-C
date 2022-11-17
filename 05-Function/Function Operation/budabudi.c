//Program to toss coin
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Toss{H,T};
enum Weekday{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THUSDAY,FRIDAY,SATURDAY};

enum Toss CoinToss(){
 		if(rand()%10<7) return (H);
		else return(T);
}


int main(){
	srand(time(0));

	int x;
	char day[100];
	printf("Toss for >>\t");
	scanf("%s",&day);
	
	if(CoinToss()==H){
		printf("Head[Today is %s,Husband's Turn]\n",day);
	}
	else{
		printf("Tail[Today is %s,Wife's Turn]\n",day);
	 }
	
	return(0);
}