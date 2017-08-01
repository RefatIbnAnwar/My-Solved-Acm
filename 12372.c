#include<stdio.h>

int main()
{
    int l,w,h,c,i;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
       scanf("%d %d %d",&l,&w,&h);
          if(l<=20&&w<=20&&h<=20)
            printf("Case %d: good\n",i);
          else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
