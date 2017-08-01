#include<stdio.h>
int main()
{
    int a,b,i,sum=0,test,j;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("Case %d: %d\n",j,sum);
    sum=0;
    }
return 0;
}
