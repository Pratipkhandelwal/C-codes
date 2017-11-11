#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int n,q,i,j,k,quot;
	scanf("%d %d",&n,&q);
	int arr[n],x[q];
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<q;i++)
	{
		cin >> x[i];
	for(i=0;i<q;i++)
	{
	for(j=0;j<n;j++)
	{
     if(x[i]%arr[j]==0)
     {
     quot=x[i]/arr[j];
     while(quot>1)
     {
     int checkPrimeNumber(int quot);
     if(checkPrimeNumber(quot) == 0)
     printf("YES\n");
     else
     printf("NO\n");
 }
     else
     {
     	printf("NO\n");
     break;
	}
}
}
}
	return 0;
}
	
	int checkPrimeNumber(int quot)
{
  bool flag = false;

  for(int i = 2; i <= quot/2; ++i)
  {
      if(quot%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}

