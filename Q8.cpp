#include<stdio.h>       //permutation TSRS
int permutation(int,int);
int main()
{
    int n,r;
    printf("Enter the values for N & R where (n>=r) : ");
    scanf("%d",&n,&r);
    permutation(n,r);
    printf("The result is : %d",permutation(n,r));
    return 0;
}
int fact(int);
int permutation(int n,int r)
{
    return (fact(n)/fact(n-r));
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
