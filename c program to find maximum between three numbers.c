#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if(max>c)
    {
        printf("the largest number is : %d", max);
    }
    else
    {
        printf("the largest number is : %d", c);
    }
    return 0;
}
