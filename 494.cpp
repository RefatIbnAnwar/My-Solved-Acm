
//KINDER GARDEN COUNTING GAME

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[1000],s;
    long i,count=0,p=0;

    while(gets(str))
    {
        for(i=0;i<=strlen(str);i++)
        {
            s=tolower(str[i]);
            if(s>='a'&&s<='z')
            {
                p=1;

            }
            else
            {
                if(p==1)
                {
                    count++;
                    p=0;
                }
            }
        }
        printf("%ld\n",count);
        count=0;
        p=0;
    }
}

