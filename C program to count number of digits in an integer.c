#include <stdio.h>

int main()
{
    int num,c=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        c++;
        num /= 10;
    }
    while(num != 0);

    printf("Total digits are: %d", c);

    return 0;
}
