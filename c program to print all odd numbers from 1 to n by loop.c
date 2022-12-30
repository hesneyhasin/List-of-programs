#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("how many numbers: ");
    scanf("%d",&n);

    for(i=1; i<=n; i+=2)
    {
        sum+=i;
    }
    printf("the sum of first %d odd numbers are: %d",n,sum);
    return 0;
}
