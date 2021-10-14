#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,c,s,e;
    scanf("%d",&s);
    scanf("%d",&n);
    scanf("%d",&e);
    for(int i=s;i<=n;i=i+e)
    {
        c=(i - 32)/1.8;
        printf("%d\t%d\n",i,c);
    }
}
