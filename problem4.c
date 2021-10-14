#include<stdio.h>
int main()
{
    int n,f1=1,f2=0,temp=0,f;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f1+f2;
        temp=f2;
        f2=f;
        f1=temp;
    }
    printf("%d",f);    
}