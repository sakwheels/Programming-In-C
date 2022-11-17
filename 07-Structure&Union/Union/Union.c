                                //Union
#include<stdio.h>
#include<string.h>

union student{
	char fullname[25];
	int rollno;
	float remainingfee;
};
int main(){
	printf("\nInformation of Student of Class 10>>\n");
	
	union student s1;

	strcpy(s1.fullname,"Sakchyam Acharya");
	printf("\nFullName=%s",s1.fullname);
	
	s1.rollno = 35;
	printf("\nRollNo=%d\n",s1.rollno);
	
	s1.remainingfee = 45905.56;
	printf("RemainingFee in RS.= %.2f\n",s1.remainingfee);
	
	return(3);
	
}
