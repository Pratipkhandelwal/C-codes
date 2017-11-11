#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int x,p;

int prime_exp(int x,int p)
{
		int count = 0;
		while (x%p==0)
		{
		count=count+1;
		x=x/p;
	    }
		return count;
}
int main()
{
	int t,n,i,k=0,z;
	long* arr=(long*)malloc(1000000*sizeof(long));
	cin >> t;
	while(t-->0)
	{
		cin >> n;
		k=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			z=prime_exp(arr[i],2);
			k=k+z;	
		}
	  if(k%2==0 && k > 1)
      cout <<"Alan" << endl;
      else
      cout << "Charlie" << endl;

}
	return 0;
}

	
