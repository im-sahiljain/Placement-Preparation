#include<stdio.h>
#include<stdlib.h>
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    pattern(n);
    
}