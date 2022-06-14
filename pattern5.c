#include<stdio.h>
#include<stdlib.h>
void pattern(int n)
{
    int i,j;
    if(n%2==0)
    {
    	for(i=1;i<=n/2;i++)
    	{
    		for(j=i;j<n/2;j++)
    		{
    			printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
		printf("\n");
		}
		for(i=1;i<=n/2;i++)
		{
			for(j=1;j<i;j++)
			{
				printf(" ");
			}
			for(j=i;j<=n/2;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	else
	{
	    for(i=1;i<=(n/2)+1;i++)
    {
        for(j=i;j<=(n/2);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=1;i<=(n/2);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n/2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
}
void main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    pattern(n);
    
}