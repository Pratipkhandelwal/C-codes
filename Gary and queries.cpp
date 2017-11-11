#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
	long int n,q,i,sum=0,x,y,z,k,p=1,m;
	long* arr=(long*)malloc(1000000*sizeof(long));
	/*long* x=(long*)malloc(1000000*sizeof(long));
	long* y=(long*)malloc(1000000*sizeof(long));*/
    cin >> n >> q;
    for(i=1;i<=n;i++)
	{
	cin >> arr[i];	
	}	
	while(q-- >0)
	{
	sum=0;
	p=1;
	cin >> k;
	if(k==1)
	{
	cin >> x >> y;
	arr[x]=y;	
	sort(arr,arr+n);
    } 
    else
    {	
    cin >> z;
    m=arr[0];
	for(i=1;i<n;i++)
	{
	if(arr[i+1]==m)
	{
		p++;
		continue;
	}	
	else
	{
	m=arr[i+1];
	sum=sum+(floor(arr[i]/z)*p);
	p=1;	
	}
}
	cout << sum << " "<<  p << " " << k  <<" " << m <<  endl;
    }
}
	return 0;
}
