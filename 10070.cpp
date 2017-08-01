
//Leap Year or Not Leap Year and …...

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20000];
    long i,a4=0,a100=0,a400=0,a15=0,a55=0;
    long c=0,d=0,f=0,g=0;
    while(gets(str))
    {
        a4=0,a100=0,a400=0,a15=0,a55=0;
        c=0,d=0,g=0;


        if(f!=0)
            printf("\n");
        f=1;

        for(i=0;i<strlen(str);i++)
        {
            a4=((a4*10)+(str[i]-'0'))%4;
            a100=((a100*10)+(str[i]-'0'))%100;
            a400=((a400*10)+(str[i]-'0'))%400;
            a15=((a15*10)+(str[i]-'0'))%15;
            a55=((a55*10)+(str[i]-'0'))%55;
        }
        if((a4==0&&a100!=0)||(a400==0))
        {
            printf("This is leap year.\n");
            c=1;
        }
        if(a15==0)
        {
            printf("This is huluculu festival year.\n");
            d=1;
        }
        if(a55==0&&c==1)
        {
            printf("This is bulukulu festival year.\n");
            g=1;
        }
        if(c==0&&d==0&&g==0)
        {
            printf("This is an ordinary year.\n");
        }



    }
    return 0;

}
