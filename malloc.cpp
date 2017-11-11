#include<stdio.h>
#include<stdlib.h>
long long gcd(long long a,long long b)
{
if (a == 0)
return b;
return gcd(b%a, a);
}
main()
{
long long t,i=0,*a,*b,j=0,k=0,m=0,n,l=0,z=0,pro=1,v=0;
const unsigned int pp = 1000000007;
long* x=(long*)malloc(1000000*sizeof(long));
scanf("%llu",&t);
for(i=0;i<t;i++)
{
z=0;
scanf("%llu",&n);
for(v=0;v<n;v++)
{
scanf("%llu",&a[v]);
}
for(j=0;j<n-1;j++)
{
for(k=j+1;k<n;k++)
{
pro=1;
pro=pro*a[j]*a[k];
b[z]=pro/gcd(a[j],a[k]);
z++;
}
}
for(l=0;l<z;l++)
{
if(b[0]>b[l])
{
b[0]=b[l];
}
}
printf("%llu\n",b[0]);
}
}

