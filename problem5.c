#include<stdio.h>
int main()
{
    int n,mod=0,even=0,odd=0;
    scanf("%d",&n);
    while(n>0)
    {
        mod=n%10;
        if(mod%2==0)
        {
            even=even+mod;
        }
        else
            odd=odd+mod;
        n=n/10;
    }
    printf("%d %d",even,odd);
    return 0;
}