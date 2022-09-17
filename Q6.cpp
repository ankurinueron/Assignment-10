#include<stdio.h>       //factorial TSRS
int fact(int);
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    fact(n);
    printf("Factorial of the number is : %d",fact(n));
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
     return(fact);
}
