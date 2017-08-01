#include<stdio.h>

int main()
{
    int c,n,a,b,sum;
    while(scanf("%d",&c)==1)
    {
        n=c;
    sum=0;
    while(n>1)
    {
        a=n/3;
        b=n%3;
        if((a+b)==2)
        n=a+b+1;
        else
        n=a+b;
        sum=sum+a;
    }
    printf("%d\n",(sum+c));
    }
    return 0;
}

