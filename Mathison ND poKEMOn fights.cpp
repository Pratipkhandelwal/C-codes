#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,q,pri[1000001],sec[1000001],p,i,j,k,x,y,sum=0,a,b;
	cin >> n >> q;
	for(i=1;i<=n;i++)
	{
		cin >> pri[i] >> sec[i];
	}
	for(int t=0;t<q;t++)
	{
		cin >> k;
		if(k==0)
		{
		cin >> p >> x >> y;
		pri[p]=x;
		sec[p]=y;
     	}
	else
	{
	 cin >> i >> j >> x >> y;
	 sum=0;
	 for(a=i;a<=j;a++)
	 {
	 	sum=sum+max(abs(x-pri[a]),abs(y-sec[a]));
	 	
	 }
	 	 cout << sum <<endl ;
	}		
	} 
	 return 0;
	}
