#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<utility>
#include<vector>
#include<list>
#include<stack>
#include<cmath>
#include<queue>
#include<set>
#define max 300005
#define ll long long int
#define llu unsigned long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,a[max],i,j,k,l,m;
	scanf("%lld",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
    for(i=n;i>0;i--)
    {
    	if(a[i]!=0)
    	{
    		if(a[i]>0 && i%2==0)
    		{
    			printf("1 1\n");
    			return 0;
			}
			else if(a[i]>0 && i%2!=0)
			{
				printf("1 -1\n");
				return 0;
			}
			else if(a[i]<0 && i%2==0)
			{
				printf("-1 -1\n");
				return 0;
			}
			else if(a[i]<0 && i%2!=0)
			{
				printf("-1 1\n");
				return 0;
			}
		}
	}
	if(a[0]>0)
	{
		printf("1 1\n");
	}
	else if(a[0]==0)
	{
		printf("0 0\n");
	}
	else if(a[0]<0)
	{
		printf("-1 -1\n");
	}
	
	
	 
}

