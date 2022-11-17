#include <stdio.h>

int main()
{
	//Nepali flag
    int i, j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=9;i>=1;i--)
    {
    	for (j=9;j>=i;j--)
    	{
		printf("%d",j);
		}
	printf("\n");	
	}
	for(i=1;i<=5;i++)
	{
		printf("*\n");
	}
	
	/*int i, j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}*/
	

    return 0;
}

