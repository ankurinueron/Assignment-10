#include<stdio.h>       //Area of circle using functions TSRS
float area(float);
int main()
{
    float r,k;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    k=area(r);
    printf("Area of circle is : %f",k);
    return 0;
}
float area(float r)
{
    float area;
    area=3.14*r*r;
    return(area);
}
