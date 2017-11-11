#include<stdio.h>

int main()
{
	int n,arr[100],i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    for(i=1;i<=n;i++)
    {
    	if(arr[i]==1)
    	k++;
    	if(arr[i]==0)
    	sum=k;
    	k=0;
    	
	}


}


