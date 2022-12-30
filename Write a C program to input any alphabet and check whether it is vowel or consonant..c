#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet: ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("the character is a vowel");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" the character is Consonant.", ch);
    }

    else
    {


        printf(" The character is not an alphabet.", ch);
    }

    return 0;
}
