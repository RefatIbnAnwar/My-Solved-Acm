
//Hashmat the brave warrior


#include<stdio.h>
int main()
{
     unsigned long  a,b,r,t;
    while(scanf("%lu%lu",&a,&b)!=EOF)
    {    if(b>a)
        {
            t=a;
            a=b;
            b=t;
            r=a-b;
            printf("%lu\n",r);
        }
        else
        {
            r=a-b;
            printf("%u\n",r);
        }

    }
return 0;
}
