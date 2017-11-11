#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
   long long n,k,i,j,count,x[100000],y[100000],z[100000];
	cin >>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
		for(i=0;i<n;i++)
	{
		cin>>y[i];
	}
	for(i=0;i<n;i++)
	{
		z[i]=ceil(sqrt(x[i]*x[i]+y[i]*y[i]));
	}
	sort(z,z+n);
    cout << z[k-1];
return 0;
}
