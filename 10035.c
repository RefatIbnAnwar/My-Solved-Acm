
//PROBLEM B: PRIMARY ARITHMETIC

#include<stdio.h>

int main()
{
   unsigned long n,m,t,s,sm,count=0,carry;
   while(scanf("%lu%lu",&n,&m)==2)
   {   if(n==0&&m==0)
          break;
          carry=0;
       for(;;)
    {
      if(n==0&&m==0)
       break;
       t=n%10;
       n=n/10;
       //printf("%d\n",t);
       s=m%10;
       m=m/10;
       //printf("%d\n",s);
       sm=t+s+carry;
       if(sm>=10)
       {
            count++;
            carry=1;
       }
       else
       carry=0;
   }
   if(count==0)
   printf("No carry operation.\n" );
   else if(count==1)
   printf("%lu carry operation.\n",count);
   else
    printf("%lu carry operations.\n",count);
   count=0;
   }
    return 0;

}
