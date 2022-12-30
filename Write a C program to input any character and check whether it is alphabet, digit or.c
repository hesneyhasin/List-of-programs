#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" The character is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf(" The character is digit.", ch);
    }
    else
    {
        printf(" The character is special character.", ch);
    }

    return 0;
}
