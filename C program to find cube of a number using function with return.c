int cube(int a)
{    int c;
    c=a*a*a;
    printf("the cube of  number is: %d",c);
    return c;
}

int main()
{
    int x,result;
    printf("enter the number: ");
    scanf("%d",&x);
    result=cube(x);
    return 0;
}
