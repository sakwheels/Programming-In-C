#include<stdio.h>
#include<string.h>

int main (){
	char bikename[25], ridername[20];
	printf("                     SAK WHEELS RACE TRACK\n                        Sanepa,Lalitpur\n                       0152889,9866540489\n");
	printf("\nEnter the RiderName:\t");
	gets(ridername); //scanf but ony for string.
	printf("Hey!%s.You're Welcome to our SportsBikers Community.\nPlease choose your favourite available SportsBike you wanna ride from below:\n",ridername);
	printf("  \n 1) DUCATI MONSTER 696\n 2) Yamaha R6\n 3)Honda CBR600\n 4)Kawasaki Ninja H2\n 5)Suzuki Hayabusa\n 6)BMW S 1000 RR\n 7)Ducati Panigale V4\n 8)DUCATI HYPERMOTARD\n");
	
	printf("\nYou can choose only one of them:\t");
	gets(bikename);
	
	printf("\nThank you for choosing %s.\nPlease wait for a while to Rev %s in RaceTrack.\nGood Luck!",bikename,bikename);
	
	return 3;
}
