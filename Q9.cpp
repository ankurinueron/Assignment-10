#include<stdio.h>       //finding the digit in a number TSRS
int check(int n,int digit)
{
    while(n!=0){
        int rem;
        rem=n%10;
        if(rem==digit)
            return 1;
        n=n/10;
    }
    return 0;
    }
    int main()
    {
        int digit,n,k;
        printf("Enter the number : ");
        scanf("%d",&n);
        printf("Enter the digit to find :");
        scanf("%d",&digit);
        k=check(n,digit);
        if(k==1)
            printf("The given digit is there in the number");
        else
            printf("the given digit is not there in the number");
        return 0;
    }


