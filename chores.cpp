#include<stdio.h>

int main()
{
	int n,x,k,i,j,sum=0,arr[1000];
	scanf("%d %d %d",&n,&k,&x);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-k;i++)
	{
		sum=sum+arr[i];
	}
	for(j=n-k+1;j<=n;j++)
	{
		sum=sum+x;
	}
	printf("%d",sum);
    return 0;
    
}
