//TRAIN SWAPPING
#include<stdio.h>
int main()
{
    int data[100],i,t,n,ptr,k,temp,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&n);
    for(ptr=1;ptr<=n;ptr++)
    scanf("%d",&data[ptr]);
    //for(ptr=1;ptr<=n;ptr++)
    //printf("%d",data[ptr]);
    for(k=1;k<=(n-1);k++)
    {
        ptr=1;
        while(ptr<=(n-k))
        {
            if(data[ptr]>data[ptr+1])
            {
                temp=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=temp;
                count++;
            }
            ptr++;
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",count);
    count=0;
    }
    return 0;
}
