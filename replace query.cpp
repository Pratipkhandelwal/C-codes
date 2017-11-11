#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,q,a,b,x,i,arr[500001],k,y;
	cin >> n >> q;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	while(q-->0)
	{
		cin >> k;
		if(k==2)
		{
			cin >> a >> b >> x;
			cout << mycount << endl;
			
		}
		else
		{
			cin >> a >> b >> x >> y;
			for(i=a;i<=b;i++)
			{
				if(arr[i]==x)
				arr[i]=y;
			}
			
		}
	}
	return 0;
}
