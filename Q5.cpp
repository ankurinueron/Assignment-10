#include<stdio.h>       //First N natural odd numbers TSRN
void natural(int);
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}
