#include <iostream>
using namespace std;

int main()
{
int n,q,i,arr[10000],x,k=1,str[1000],sum=0,pos=0,j;
cin >> n;
for(i=1;i<=n;i++)
{
    cin >> arr[i];
}
cin >> q;
while(q-->0)
{
cin >> x;
sum=0;
for(i=1;i<=n;i++)
{
sum=arr[i]+sum;
if(sum>=x)
{ 
cout << i << endl;
break;
}
}
if(sum < x)
{
	cout << "-1"<<endl;
}
}
return 0;
}
