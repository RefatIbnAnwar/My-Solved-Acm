//MARVELOUS MAZES

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[300];
    int i,j,c=0;
    while(gets(ch))
    {
        for(i=0;i<strlen(ch);i++)
        {
            if(ch[i]=='!')
            printf("\n");
            else if(ch[i]>='0'&&ch[i]<='9')
            {
              c=c+(ch[i]-'0');
              for( j=i+1;((ch[j]>='A'&&ch[j]<='Z')||(ch[j]=='b')||(ch[j]==' ')||(ch[j]=='*'));j++)
              {
                  for(int k=0;k<c;k++)
                  {
                      if(ch[j]>='A'&&ch[j]<='Z')
                      printf("%c",ch[j]);
                      else if(ch[j]=='b')
                      printf(" ");
                      else if(ch[j]=='*')
                      printf("*");

                  }

                  c=0;
              }
              i=j-1;
            }
        }
        printf("\n");
    }
    return 0;
}
