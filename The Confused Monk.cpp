#include<stdio.h>
#include<math.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}

int main()
{
	long long int n,i,pro=1,val;
	const unsigned int mod=1000000007;
	scanf("%lld",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		pro=((pro%mod)*(arr[i]%mod))%mod;
	}
	int result = arr[0];
    for (int i=1; i<n; i++)
    result = gcd(arr[i], result); 

val=1;
while(result!=0)
{
	if(result%2==1)
	{
		val=(val*pro)%mod;
	}
	pro=(pro*pro)%mod;
	result=result/2;
}
printf("%lld",val);
return 0;	
	
}
