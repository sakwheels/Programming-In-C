#include<stdio.h>
#include<math.h>
/*void sayhello(char name[]);
int main()
{
	sayhello("Sak WHEELS");	
	return(0);
}

void sayhello(char name[])
{
	printf("Hello %s.",name);
}*/
void sayhello();
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		sayhello();
	}
	return 1;
}

void sayhello()
{
	static int num=10;
	printf("Hello from number %d\n",num);
	num--;
	
}
