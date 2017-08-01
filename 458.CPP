//THE DECODER

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i;

    while(gets(str))
    {
        for(i=0;str[i]!='\0';i++)
        {
            str[i]=str[i]-7;
        }
        puts(str);

    }
    return 0;
}
