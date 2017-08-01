//COMBINATION

#include<stdio.h>

int main()
{
    double n,m,c,p=1,f=1,i;
    while(scanf("%lf%lf",&n,&m)==2)
    {
        if(n==0&&m==0)
            break;
        else
        {
        for(i=n;i>(n-m);i--)
       p=i*p;
       for(i=m;i>1;i--)
       f=f*i;
       c=p/f;
       printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
        p=1;
        f=1;
        }
    }
    return 0;

}
