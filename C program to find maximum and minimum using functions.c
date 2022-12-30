int maximum(int a,int b)
{
    int max;
    if(a<b)
    {
        printf("max is: %d",b);
    }
    else
    {
        printf("max is %d",a);
    }
}
    int main(){

    int x,y;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);

    maximum(x,y);
    return 0;

    }


