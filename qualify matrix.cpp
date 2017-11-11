#include<iostream>
#include<math.h>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,k,i,j,flag=0,sum=0,arr[100100][5],cnt[16];
	cin >>n >> k;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<k;j++)
		{
			cin >> arr[i][j];
			sum+=arr[i][j] << j;
		}
		cnt[sum]++;
	}
	for(j=0;j<16;j++)
		{
			if((j&sum)==0 && cnt[j])		
      	{
      		
		flag=1;
			}
		}
				if (flag) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	 return 0;	
 } 
