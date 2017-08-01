#include<stdio.h>

int main()
{
    long a,b;
    int t,i;
    scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
    scanf("%ld%ld",&a,&b);
    if(a>b)
    printf(">\n");
    else if(a<b)
    printf("<\n");
    else
    printf("=\n");
   }
    return 0;

}
