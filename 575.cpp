
//SKEW BINARY

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[100];
    long long p,k,sum=0,a,i;
    while(gets(str))
    {
        sum=0;
        if(strcmp(str,"0")==0)
        break;
        k=strlen(str);
        p=k;
        for(i=0;i<k;i++)
        {
            a=str[i]-'0';
            sum=sum+ a*(pow(2,p)-1);
            p--;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
