#include<stdio.h>
int main()
{
    int i,n;
    printf("how many numbers: ");
    scanf("%d",&n);

    printf("the natural odd numbers are: ");

    i=1;
    while(i<=n)
    {
       if(i%2 !=0)
       {
           printf("%d\n",i);
       }
       i++;
    }
      return 0;
    }


