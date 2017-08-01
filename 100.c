//THE 3N+1 PROBLEM
#include<stdio.h>

int main()

{
     unsigned long  n,count,i,j,a,b,temp=0,t;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        i=a;
        j=b;
        if(i>j)
        {
            t=i;
            i=j;
            j=t;

        }
        for(i=i;i<=j;i++)
    {
        n=i;
        count=1;

    while(n!=1)
    {

        if(n%2==1)
        {n=3*n+1;

        count++;}
        else
        {n=n/2;

        count++;}

   }



    if(count>temp)
    temp=count;

   }
    printf("%lu %lu %lu\n",a,b,temp);
    temp=0;
    }
    return 0;

}
