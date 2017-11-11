#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	long long int n,s,t[100000],d[100000],i,k=0,sum=0,p=0,diff;
	scanf("%lld %lld",&n,&s);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&t[i],&d[i]);
		
	}
	while(k<n-1)
	{
	for(i=t[k];i<t[k+1];i++)
	{
		sum=sum+d[k];
		if(sum!=s)
		continue;
		else 
		p=i+1;
		break;
	}
	k++;
	p=i;
}
diff=s-sum;
for(i=0;i<diff;i++)
{
	sum=sum+d[k];
	p++;
}
 printf("%lld",p);
 return 0;
}
	
