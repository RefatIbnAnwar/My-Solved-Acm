//PERFECTION

#include<stdio.h>

int main()
{
    long n,i,sum=0;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n)==1)
    {
        sum=0;
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            sum=sum+i;
        }
        if(sum==n)
                printf("%5ld  PERFECT\n",n);
        else if(sum<n)
                printf("%5ld  DEFICIENT\n",n);
        else if(sum>n)
                printf("%5ld  ABUNDANT\n",n);



    }
    return 0;
}
