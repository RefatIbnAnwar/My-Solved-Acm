
//THE HOTEL WITH INFINITE ROOMS

#include<stdio.h>

int main()
{
   long long s,d,day;
    while(scanf("%lld %lld",&s,&d)==2){
            day=1;
         while(day<=d)
    {
        day = day +s;
        s++;
    }
    printf("%lld\n",s-1);
    }
   return 0;

}
