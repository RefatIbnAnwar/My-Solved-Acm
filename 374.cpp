
//BIG MODE

#include<stdio.h>
#include<math.h>


long square(long n)
    {
        return n*n;
    }

    long bigmod(long b,long p,long m)
    {
        if(p == 0)
           return 1;
        else if (p%2==0)
           return square(bigmod(b,p/2,m))% m;
        else
           return((b%m)* bigmod(b,p-1,m))%m;
    }



int main()
{

    long base,power,mod;

    while(scanf("%ld %ld %ld",&base,&power,&mod)==3)
    {
        printf("%ld\n",bigmod(base,power,mod));
    }


}
