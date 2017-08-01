
//REVERSE AND ADD

#include <stdio.h>

int main()
{
   unsigned long n, r= 0,in,s=0,c=0,t,i;
   scanf("%lu",&t);
   for(i=0;i<t;i++)
   {
   scanf("%lu",&in);
   for(;;)
  {
       n=in;
      r=0;
    while (n != 0)
   {
      r = r * 10;
      r = r + n%10;
      n = n/10;
   }

   //printf("%lu\n", r);
   if(s==r)
   break;
   else
   {s=in+r;
     in=s;
     c++;
   }
   }
    printf("%lu %lu\n",c,s);
    c=0;
    s=0;
   }
   return 0;
}

