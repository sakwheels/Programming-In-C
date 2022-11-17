//program to check the vowel letter present in the sentence 
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
int main()
{
		char letter[100];
		printf("Enter the sentence:\n");	
		scanf("%[^\n]s",letter);
	
		int islowercasevowel ,isuppercasevowel, i ;
	
	for(i=0;letter[i]!='\0';i++){
		islowercasevowel = (letter[i] =='a' || letter[i] =='e' || letter[i] =='i' || letter[i] =='o' || letter [i]=='u' );
		isuppercasevowel = (letter[i] =='A' || letter[i] =='E' || letter [i]=='I' || letter [i]=='O' || letter[i] =='U' );
		
		if(islowercasevowel || isuppercasevowel)
	{
		printf("%c ",letter[i]);
		}
	/*else
	{
		printf("%c is a consonant letter.\n",letter[i]);	
		}*/
	}
	/*if(islowercasevowel || isuppercasevowel)
	{
		printf("%c is a vowel letter.",letter);
		}
	else
	{
		printf("%c is a consonant letter.",letter);	
		}*/
	
return(0);	
}
