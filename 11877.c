#include<stdio.h>

int main()
{
    int n,a,b,sum;
    for(;;)
    {
    scanf("%d",&n);
    if(n==0)
    break;
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
    printf("%d\n",sum);
    }
    return 0;
}
