#include <iostream>
using namespace std;
int main()
{
long int n,i,p=0,sum=0,l,r,x;
cin >> x;
while(x-->0)
{
cin >> l >> r;
n=r;
bool b[n+1];
sum=0;
for(i=l;i<=n;i++)
{
b[i]=true;
}
b[0]=false;
b[1]=false;
long count=0,j;
for(i=2;i*i<=n;++i)
{
if(b[i]==true)
{
for(j=i*i;j<=n;j=j+i)
{
b[j]=false;
}
}
}
for(i=l;i<=n;i++)
{
if(b[i]==true && i >=l && i <=r )
{	
sum=sum+i;
}
}
cout<< sum << endl;
}
return 0;
}

