#include<stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}

int main()
{
int t,n,arr[10000],ans,i;
const unsigned int mod=1000000007;
scanf("%d",&t);
while(t-->0)
{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ans=arr[0];
	    for (int i=1; i<n; i++)
        ans = ( ((arr[i]*ans))%mod /
                (gcd(arr[i], ans))%mod );

	printf("%d\n",ans);	
}
	return 0;
}
