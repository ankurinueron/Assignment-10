#include<stdio.h>       //combination TSRS
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
     return(fact);
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

//int comb(int,int);
int main()
{
    int n,r,k;
    printf("Enter the values for N & R where (n>=r) : ");
    scanf("%d",&n,&r);
    k=comb(n,r);
    printf("The result is : %d",k);
    return 0;
}

