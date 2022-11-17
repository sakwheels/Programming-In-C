#include<stdio.h>
#include<string.h>

//Structure:Group of disimilar elements,variable,datatype.It can hold different variable in a same variable;
struct student{
	int rollno;
	char name[20];
	int mark;
	unsigned long long phoneno;
};


int main(){
	struct student su1;
	struct student su2;
	struct student su3;
	
	su1.rollno = 35;
	su1.mark = 66;
	su1.phoneno = 9866549844;
	strcpy(su1.name,"SAKCHYAM ACHARYA"); 
	
	su2.rollno = 39;
	su2.mark = 76;
	su2.phoneno = 9834556453;
	strcpy(su2.name,"SUJAN LOHANI");
	
	su3.rollno = 40;
	su3.mark = 69;
	su3.phoneno = 9899654632;
	strcpy(su3.name,"SUJIT TAMANG"); 
	
	printf("                  Everest Engineering & Management College\n                             Sanepa,Lalitpur\n");
	 		
	//Printing the given structure values.
	printf("\nInformation for 1st student:\n");
	printf("\nFull Name=%s\nRoll no=%d\nMarks Obtained=%d\nPhone No=%llu\n",su1.name,su1.rollno,su1.mark,su1.phoneno);
	
	printf("\nInformation for 2nd student:\n");
	printf("\nFull Name=%s\nRoll no=%d\nMarks Obtained=%d\nPhone No=%llu\n",su2.name,su2.rollno,su2.mark,su2.phoneno);

	printf("\nInformation for 3rd student:\n");
	printf("\nFull Name=%s\nRoll no=%d\nMarks Obtained=%d\nPhone No=%llu\n",su3.name,su3.rollno,su3.mark,su3.phoneno);
	
	return(3);
}
	
