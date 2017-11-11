#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,a,b,c,sum=0,arr[3],i=1,j;
cin >> n;
for(i=0;i<3;i++)
{
	cin >>arr[i];
}
sort(arr,arr+3);
if(n==1)
{
	cout << 0;
	return 0;
}
else
{
while(n!=1)
{
for(j=i;j<3;j++)	
sum=sum+arr[j];
n--;	
}	
}
cout << sum ;
return 0;
}
