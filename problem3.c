#include<stdio.h>
int main()
{
    int n,flag=1,i,j;
    scanf("%d",&n);
    for( i=2;i<=n;i++)
    {
        flag=1;
        for( j=2;j<i;j++)
        {
            if(i%j==0)
            {
                    flag=0;
            }
        }
        if(flag==1)
        {
            printf("%d\n",j);
        }
    }
}