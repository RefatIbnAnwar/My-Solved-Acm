#include<stdio.h>

int main()
{
    int num,pla,pass,p,i,t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d%d%d",&num,&pla,&pass);
        p=pla;
        for(i=1;i<=pass;i++)
        {
           p++;
           if(p==(num+1))
           p=1;
        }
        printf("Case %d: %d\n",j,p);
    }

    return 0;
}
