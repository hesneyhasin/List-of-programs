#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        sum+=i;
    }
printf("the sum of first %d even numbers are: %d",n,sum);

    return 0;
}
