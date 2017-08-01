#include<stdio.h>

int main()
{
    int a[10],i,j,k,c,t;
    scanf("%d",&t);
    for(c=1;c<=t;c++)
    {
        for(i=1;i<=3;i++)
         scanf("%d",&a[i]);



    if(a[1]>=a[2]&&a[2]>=a[3])
         printf("Case %d: %d\n",c,a[2]);
    else if(a[1]<=a[2]&&a[2]<=a[1])
          printf("Case %d: %d\n",c,a[2]);
    else
    //exit(1);
    {
        for(j=2;j<=3;j++)
    {
        k=a[j];
        i=j-1;
        while((i>0)&&(a[i]>k))
        {
            a[i+1]=a[i];
            i=i-1;
        }
     a[i+1]=k;

    }

      printf("Case %d: %d\n",c,a[2]);
    }
    }
    return 0;
}
