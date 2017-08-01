
//LET ME COUNT THE WAYS ( COIN CHANGE )

#include<stdio.h>



int main()
{
    long cent;
    while(scanf("%ld",&cent)==1)
{
    long nways[30050]={0};
    int coins[10]={1,5,10,25,50};

    nways[0]=1;

    for(long i=0;i<5;i++)
    {
        for(long j=coins[i],k=0;j<=cent;j++,k++)
        {
            nways[j]+=nways[k];
        }
    }

    if(nways[cent]==1)
    printf("There is only 1 way to produce %ld cents change.\n",cent);
    else
    printf("There are %ld ways to produce %ld cents change.\n",nways[cent],cent);

}


    return 0;
}
