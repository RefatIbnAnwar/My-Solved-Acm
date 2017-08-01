
//PETER'S SMOKES

#include<stdio.h>

int main()
{
    int c,n,a,b,sum,k;
    while(scanf("%d%d",&c,&k)==2)
    {
        n=c;
    sum=0;
    while(n>=k)
    {
        a=n/k;
        b=n%k;
        n=a+b;
        sum=sum+a;
    }
    printf("%d\n",(sum+c));
    }
    return 0;
}


