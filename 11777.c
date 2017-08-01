include<stdio.h>
int main()
{
long term1,term2,final,atnd,clst[3],n,max,j,clstn,l,temp,i,total,k;
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
scanf("%ld%ld%ld%ld",&term1,&term2,&final,&atnd);
for(j=0;j<3;j++)
scanf("%ld",&clst[j]);
for(j=0;j<2;j++)
for(k=1;k<3;k++)
if(clst[j]<=clst[k])
{
    temp=clst[j];
clst[j]=clst[k];
clst[k]=temp;
}
clstn=(clst[0]+clst[1])/2;
total=(term1+term2+final+atnd+clstn);
if(total>=90)
printf("Case %ld: A\n",i);
else if(total>=80&&total<90)
printf("Case %ld: B\n",i);
else if(total>=70&&total<80)
printf("Case %ld: C\n",i);
else if(total>=60&&total<70)
printf("Case %ld: D\n",i);
else if(total<60)
printf("Case %ld: F\n",i);
}
return 0;
}
