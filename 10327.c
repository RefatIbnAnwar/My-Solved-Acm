
//FLIP SORT

#include<stdio.h>
int main()
{
    int data[1000],n,ptr,k,temp,count=0;
    while(scanf("%d",&n)==1)
    {
    for(ptr=1;ptr<=n;ptr++)
    scanf("%d",&data[ptr]);
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
    printf("Minimum exchange operations : %d\n",count);
    count=0;
    }
    return 0;
}
