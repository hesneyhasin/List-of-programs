#include<stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("the number is positive ");

    }
    if(n<0)
    {
        printf("the number is negative");
    }
    if(n==0)
    {
        printf("the number is zero");
    }
    return 0;
}
