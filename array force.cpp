#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	
	int t,mod,n,i,k,j,val,a[100000];
	cin >> t;
	while(t--)
	{
		cin >> a[0] >> a[1] >> n >> mod;
		for(i=2;i<n;i++)
		{
			a[i] = (a[i-1]+a[i-2])%mod;
		}
		sort(a,a+n);
		k=1;
		val=0;
		for(i=0;i<=n-1;i++)
		{
		if(a[i]==a[i+1])
	    {
		k++;
		}
		else if(a[i]!=a[i+1])
		{
			val = val + pow(k,2);
			 k=1;
		}
	}
	cout << val << endl;
}
	return 0;	
}
