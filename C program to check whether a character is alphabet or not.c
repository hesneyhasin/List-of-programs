#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);

   if((ch>= 'a' && ch<='z') ||(ch>= 'A'&& ch <='Z'))
   {
       printf("Character is an alphabet.");

   }
    else
    {
        printf("Character is not alphabet.");
    }
    return 0;

}
