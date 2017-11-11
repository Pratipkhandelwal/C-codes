#include<stdio.h>

int main()
{
	long long int n,t,arr[100000],k;
	const unsigned int m=1000000007;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		k=((n%m)*((2*n-1)%m)%m);
		printf("%lld\n",k);
	}
	return 0;
}
