
//BOX OF BRICKS

#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0,ave,mv=0,t=0,k=1;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    //printf("%d",sum);
    ave=sum/n;
    //printf("%d",ave);
    for(i=1;i<=n;i++)
    {
        if(ave>a[i])
        {t=ave-a[i];
        mv=mv+t;}
    }
    printf("Set #%d\n",k);
    printf("The minimum number of moves is %d.",mv);
    printf("\n\n");
    k++;
    mv=0;
    sum=0;

    }

    return 0;
}
