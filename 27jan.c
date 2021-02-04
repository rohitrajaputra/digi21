#include<stdio.h>

int main ()
{
    int n,prod=1;
    scanf("%d", &n);
    while (n!=0)
    {
        n=n%10;
        prod = prod * n;
        n=n/10;
    }
    printf("%d",prod);
    return 0;
    
}