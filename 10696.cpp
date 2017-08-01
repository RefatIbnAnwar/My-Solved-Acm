#include<stdio.h>

 long long mc91(long long n)
{
    if(n>100)
    return n-10;
    else
    return mc91(mc91(n+11));
}


int main()
{
    long long n,c;

    while(scanf("%lld",&c)==1)
    {
        n=c;
        if(c==0)
        break;
        else
        printf("f91(%lld) = %lld\n",c,mc91(n));
    }

}
