#include<stdio.h>
int main()
{
    int i,n;
    printf("how many numbers: ");
    scanf("%d",&n);
    printf("the natural numbers are: ");
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
return 0;
}
