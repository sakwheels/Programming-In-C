#include<stdio.h>
#include<string.h>
struct student{
   char sname [30];
   char address[50];
   long int Telephone;
   char Faculty[20];
};
int main(){
    struct student s[100];
    int i;
    FILE *ptr;
    ptr = fopen ("students.txt", "w");
    for (i=0; i<5; i++){
        printf ("enter details of student %d", i+1);
        printf("Student name:");
        gets(s[i].sname);
        printf("Student address:");
        gets(s[i].address);
        printf("Student telephone:");
        scanf("%ld",&s[i].Telephone);
        printf("student Faculty:");
        gets(s[i].Faculty);
        fwrite(&s[i], sizeof(s[i]),1,ptr);
    }
    fclose (ptr);
    ptr = fopen ("student1.txt", "r");
    char city[10]="Pokhara";
    short int n;
    for (i=0; i<5; i++){
        n=strcmp(city,s[i].address);
        if (n!=0){
            printf("details of student %d are\n", i+1);
            fread(&s[i], sizeof (s[i]) ,1,ptr);
            printf("\nstudent name = %s\n", s[i].sname);
            printf("student address = %s\n", s[i].address);
            printf("student name = %s\n", s[i].Faculty);
            printf("student number = %ld\n", s[i].Telephone);
        }
    }
    fclose(ptr);
    return (0);
}