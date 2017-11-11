#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	long long t,n,i,j,val,arr[100000],k;
	cin >> t;
	const unsigned int m=1000000007;
	while(t-->0)
	{
		cin >> n;
		val=0;
		k=0;
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		k=*std::max_element(arr,arr+n);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				val=val+abs(arr[j]-arr[i]);
			}
		}
		cout << (val*k)%m ;
	}
		return 0;
	}
