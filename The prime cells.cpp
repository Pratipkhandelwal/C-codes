#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,k=0,x,y,sum=0,i,j,top,left,right,bot;
	bool isPrime = true;
	scanf("%d",&n);
	int arr[n+2][n+2];
	
for(i=1;i<=n;i++)//rows
	{
		for(j=1;j<=n;j++)//columns
		{
			scanf("%d",&arr[i][j]);
	}
}    
        for (x= 1; x <=n; x++)
        {
        	sum=0;
        for (y = 1; y<=n; y++)
        {
        if(x-1 <= 0)
        {
        	top=0;
		}
		else
		{
		top=arr[x-1][y];
		}
		if(x+1 >n)
		{
			bot=0;
		}
		else
		{
		bot=arr[x+1][y];	
		}
		if(y+1 > n)
		{
			right=0;
		}
		else
		{
		right=arr[x][y+1];
		}
		 if(y-1 <=0)
		 {
		 	left=0;
		 }
		 else
		 {
		left=arr[x][y-1];   
		 }
		 sum=top+bot+left+right;
		 printf("%d\n",sum);
	for(i = 2; i <= sum / 2; ++i)
  {
      if(sum % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
  k++;
}
}
printf("%d",k);   
return 0;
}       

 


