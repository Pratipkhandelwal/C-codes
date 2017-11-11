#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long n,q,i,j,id,v,k;
long* arr=(long*)malloc(1000000*sizeof(long));
long* B=(long*)malloc(1000000*sizeof(long));
const unsigned int m=1000000007;
cin >> n;
for(i=1;i<=n;i++)
{
	cin >> arr[i];
}
cin >> q;
while(q-->0)
{
cin >> k;
if(k==0)
{
cin >> id >> v;
arr[id]=v;	
}	
else
{
	cin >> id;
for(i=1;i<=n;i++)
{
    B[i]=1;
    for(j=1;j<=n;j++)
    {
        if(i!=j)
        {
            B[i]=B[i]*arr[j];
        }
    }
}	
	cout << B[id]%m  << endl;
}	
}
return 0;
}	

