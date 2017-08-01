
//PROBLEM E: JOLLY JUMPERS

#include<stdio.h>

int main()
{
    int a[3050],b[3050];
    int n,i,m=0,p,j;
    while(scanf("%d",&n)==1)
    {
        m=0;
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        b[i]=0;
    for(j=1;j<=n-1;j++)
    {
        if(a[j]>a[j+1])
           p=a[j]-a[j+1];
        else
           p=a[j+1]-a[j];
        b[p]=1;
    }
    for(i=1;i<=n-1;i++)
        if(b[i]==1)
        m++;
    if(m==(n-1))
        printf("Jolly\n");
    else
        printf("Not jolly\n");
    }
    return 0;
}
