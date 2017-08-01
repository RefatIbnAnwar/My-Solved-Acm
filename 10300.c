
//ECOLOGICAL PREMIUM

#include<stdio.h>

int main()
{
    int f,s,a,e,i,c,j;
    float d,m,t,sum=0;
    scanf("%d",&c);
    for(j=1;j<=c;j++)
{
    scanf("%d",&f);
    for(i=1;i<=f;i++)
    {
        scanf("%d %d %d",&s,&a,&e);
        d=(float)s/(float)a;
        m=(float)d*(float)e;
        t=(float)m*(float)a;
        sum=sum+t;
    }
    printf("%.f\n",sum);
    sum=0;
}
    return 0;

}

