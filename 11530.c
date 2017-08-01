#include<stdio.h>
#include<string.h>

int main()
{
    char str[500];
    int i,count=0,j,test;
    scanf("%d",&test);
    getchar();
    for(j=1;j<=test;j++)
    {
        gets(str);
    for(i=0;;i++)
    {
        if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ')
            count=count + 1;
        if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
            count=count + 2;
        if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')
            count=count + 3;
        if(str[i]=='s'||str[i]=='z')
            count=count + 4;
        if(str[i]=='\0')
            break;
    }
    printf("Case #%d: %d\n",j,count);
    count=0;
    }
    return 0;
}
