#include<stdio.h>
int main()
{
    int i,n;
    printf("how many numbers to print: ");
    scanf("%d",&n);

    printf("all natural even numbers are : ");

     i=0;
    while(i<=n)
    {
        if(i % 2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
