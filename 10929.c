#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[1005];
    int value=0,i;
    while(scanf("%s",str)==1)
    {
        if(strcmp(str,"0")==0)
            break;
        for(i=0;i<strlen(str);i++)
                value=(value*10+(str[i]-'0'))%11;
        if(value==0)
           printf("%s is a multiple of 11.\n",str);
        else
            printf("%s is not a multiple of 11.\n",str);
        value=0;
    }
    return 0;
}
