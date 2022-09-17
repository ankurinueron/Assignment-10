#include<stdio.h>
int oddeven(int);
int main()
{
   int n,k;
   printf("Enter any number : ");
   scanf("%d",&n);
   k=oddeven(n);
   if(k==1)
    printf("Even number");
   else
    printf("Odd number");
   return 0;
}
int oddeven(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
        return 0;

}
