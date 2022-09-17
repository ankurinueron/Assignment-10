#include<stdio.h>       //SI using functions TSRS
float si(float,float,float);
int main()
{
    float p,r,t,k;
    printf("Enter the principal amount, ROI and time : ");
    scanf("%f%f%f",&p,&r,&t);
    k=si(p,r,t);
    printf("Simple interest is : %f",k);
    return 0;
}
float si(float p, float r, float t)
{
    float simple;
    simple=((p*r*t)/100);
    return(simple);
}
