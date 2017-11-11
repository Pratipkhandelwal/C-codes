#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t,n,p,i,c=0,h=0;
	long arr[501];
	cin >> t;
	while(t-->0)
	{
		cin >> n >> p;
		c=0,h=0;
		for(i=0;i<n;i++)
		{
		  cin >> arr[i];
		  if(arr[i]>=p/2)
		    c++;
		  else if(arr[i]<=p/10)
		    h++;  
		}
		if(c==1 && h==2)
		cout << "yes" << endl;
		else
		cout << "no" << endl;
	}
	return 0;
}
