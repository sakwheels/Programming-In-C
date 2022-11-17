#include<stdio.h>
#include<string.h>
        //Nested Structure 
struct student{
	int rollno;
	char name[35];
	int mark;
};

struct addinfo{
	char address[25];
	unsigned long long phoneno;
	struct student stu;
};


int main(){
	int i, n;
	printf("                             Nested Structure \n");
	printf("\nEnter the no of students:-\t");
	scanf("%d",&n);
	
	struct addinfo ai;
	
	for(i=0;i<n;i++){
		printf("\nInformation of %d Student\n",i+1);
		printf("\nEnter FullName, RollNo, MarksObtained, Address, PhoneNo:\n");
		scanf("%s %d %d %s %llu",ai.stu.name, &ai.stu.rollno, &ai.stu.mark, &ai.address, &ai.phoneno);
	}
	//For printing
	printf("\n\nShort Details of %d Student are as follows:\n",i+1);
	for (i=0;i<n;i++){
			
			printf("\nFullName=%s\nRollNo=%d\nMarksObtained=%d\nAddress=%s\nPhoneNo=%llu",ai.stu.name, ai.stu.rollno, ai.stu.mark, ai.address, ai.phoneno);		
	}	
	return(3);
}
	
