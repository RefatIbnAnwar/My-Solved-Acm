
//WORD SCRAMBLE

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,j,k,p=0;

    while(gets(str))
    {
        for( i=0;i<=strlen(str);i++)
            if(str[i]==' '||str[i]=='\t'||str[i]=='\0')
            {
                j=i-1;
                for(k=j;k>=p;k--)
                printf("%c",str[k]);
                if(str[i]!='\0')
                printf("%c",str[i]);
                i=j+2;
                p=i;

            }
            printf("\n");
        p=0;
        j=0;


    }
    return 0;

}
