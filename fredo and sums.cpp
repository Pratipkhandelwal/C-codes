#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,i,arr[100000],min=0,max=0,t;
	cin>>t;
	while(t-->0)
	{
	cin>>n;
	min=0;
	max=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+n);
	for(i=0;i<n;i=i+2)
{
	min=min+abs(arr[i]-arr[i+1]);
}
for(i=0;i<n/2;i++)
{
	max=max+abs(arr[i]-arr[i+n/2]);
}
cout << min << " "<< max <<endl;
}
return 0;
}
