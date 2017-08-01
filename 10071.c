//BACK TO HIGH SCHOOL PHYSICS

#include<stdio.h>
int main()
{
    int v,t;
    long int s;
    while(scanf("%d %d",&v,&t)==2)
    {
    t=t*2;
    s=v*t;
    printf("%ld\n",s);
    }
    return 0;
}
