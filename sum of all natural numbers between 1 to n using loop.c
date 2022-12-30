#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("how many numbers to sum: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
       sum+=i;
    }

    printf("sum of the natural numbers are : %d ",sum);
    return 0;

    }
