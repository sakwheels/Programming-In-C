#include<stdio.h>
#include<string.h>
        //Structure Array
//Array:-Collection of same elements.
struct students{
	int rollno;
	char name[35];
	int mark;
	char address[25];
	unsigned long long phoneno;
};


int main(){
	int i, n;
	printf("                              Structure Array\n");
	printf("\nEnter the no of students:-\t");
	scanf("%d",&n);
	struct students sut[n];

//For scanning/storing values,data	
	for(i=0;i<n;i++){
		printf("\nInformation for %d Student",i+1);
		printf("\nEnter FullName:\t");
		scanf("%s",sut[i].name);
		printf("Enter Roll No:\t");
		scanf("%d",&sut[i].rollno);
		printf("Enter MarkObtained:\t");
		scanf("%d",&sut[i].mark);
		printf("Enter Address:\t");
		scanf("%s",sut[i].address);
		printf("Enter PhoneNo:\t");
		scanf("%llu",&sut[i].phoneno);
		
	}
	
	//For printing
		for (i=0;i<n;i++){
			printf("\nShort Details of %d Student are as follows:\n",i+1);
			printf("\nFullName=%s\nRoll No=%d\nMarksObtained=%d\nAddress=%s\nPhone No=%llu\n",sut[i].name,&sut[i].rollno,&sut[i].mark,sut[i].address,sut[i].phoneno);
	
		}	
		
	return(3);
}
	
