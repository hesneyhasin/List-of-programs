double area(double radius)
double diameter(double radius)
double circumference(double radius)
{
    float dia,cir,a;
    dia=2*radius;
    cir=2*3.14159*radius;
    a = 3.14159*radius*radius;
    printf("the diameter of the circle is: %f",dia);
    printf("the circumference of the circle is: %f",circ);
    printf("the area of a circle is: %f",a);
}
int main()
{
    float x,y,z;
    printf("enter the radius: ");
    scanf("%d",&x);
    area(x);
    diameter(y);
    circumference(z);
    return 0;
}
