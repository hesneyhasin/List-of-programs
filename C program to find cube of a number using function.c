int cube(int a)
{

    int c;

    c=a*a*a;
    printf("the cube of the number is: %d",c);
}
int main()
{
   int x;
printf("enter the number: ");
scanf("%d",&x);
cube(x);
return 0;

}
