#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,d,prev=0;

	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>d;
		while(prev>=s)
		{
			s=s+d;
		}
		prev=s;
	}
	cout<<prev;
}
