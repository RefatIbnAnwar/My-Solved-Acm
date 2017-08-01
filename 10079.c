
//PIZZA CUTTING

#include<stdio.h>

int main()
{
    long long n,p;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
        else{
             p = n*(n+1)/2 + 1;
             printf("%lld\n",p);
        }
    }
    return 0;
}
