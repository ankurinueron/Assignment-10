#include<stdio.h>       //Prime factors of a given number TSRN
void primefac(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while(n%i==0){
        printf(" %d",i);
        n=n/i;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    primefac(n);
    return 0;
}
