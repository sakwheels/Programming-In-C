#include <stdio.h>
//fget() , fputc();
int main(){
	FILE *fp;
	char ch[25];

	fp = fopen("saxyam.txt","a");
	printf("Enter the text that you want to save & press q for quit.\n");
	
	while(1){
		scanf("%c",ch);
			if(ch == 'q'){
				break;
			}
				else{
					fputc(ch, fp);
				}
				
	}


fclose(fp);		

    return 3;
}

	

