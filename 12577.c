#include<stdio.h>
#include<string.h>


int main()
{
    char  Hajj[]="Hajj";
    char Umrah[]="Umrah";
    char br[]="*";
    char str[100];
    int x,y,c=0;
    for(;;)
    {
        gets(str);
    y=strcmp(br,str);
    if(y==0)
    break;
    x=strcmp(Hajj,str);
    if(x==0)
    {c++;
    printf("Case %d: Hajj-e-Akbar\n",c);}
    x=strcmp(Umrah,str);
    if(x==0)
    {c++;
    printf("Case %d: Hajj-e-Asghar\n",c);}
    }
    return 0;

}
