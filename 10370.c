
//ABOVE AVERAGE

#include<stdio.h>
int main()
{
      int n,i,sum=0,count=0,c,j;
      float ave,per,temp;
      int std[1500];
      char a='%';
      scanf("%d",&c);
      for(j=1;j<=c;j++)
      {
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      scanf("%d",&std[i]);
      for(i=1;i<=n;i++)
      sum=sum+std[i];
      ave=sum/n;
     // printf("%.3f\n",ave);
     for(i=1;i<=n;i++)
     {
         if(std[i]>ave)
         count++;
     }
     //printf("%d\n",count);
     temp=(float)count/(float)n;
     //printf("%.3f\n",temp);
     per=(float)temp*100;
     printf("%.3f%c\n",per,a);
     sum=0;
     count=0;

      }
      return 0;
}
