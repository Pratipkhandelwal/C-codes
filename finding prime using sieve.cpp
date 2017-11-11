#include <iostream>
using namespace std;
int main()
{
long int n,i,p=0;
cin>>n;
bool b[n+1];
int arr[1000];
for(i=0;i<=n;i++)
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
for(i=0;i<=n;i++)
{
if(b[i]==true)
{
arr[p]=i;
p++;	
count++;
}
}
cout<<count<<endl;
for(i=0;i<p;i++)
{
	cout << arr[i] << " ";
}
return 0;
}

