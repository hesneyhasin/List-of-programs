int evenodd(int n)
{

 if(n % 2==0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

}
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    evenodd(x);
    return 0;
}
