#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
 
 
int k,i,p=0,n,q,j,m,arr[100001],str[100001],y,ptr[100001];
void fact(int y)
{
	for(i=arr[0]/k; i <=arr[n-1]/y ; i++)
	{
		str[i]=y*i;
		p++;
	}
	m=p;
}
 
int BinarySearch(int A[], int N, int x, bool searchFirst)
{
	int low = 0, high = N - 1;
	
	int result = -1;
 
	while(low <= high)
	{	
		int mid = (low + high)/2;
 
		if (x == A[mid])
		{
			result = mid;
			
			if (searchFirst)
				high = mid - 1;	
			
			else 
				low = mid + 1;		
		}
	
		else if (x < A[mid])
			high = mid - 1;	
 
		else 
			low = mid + 1;
	}
 
	return result;
}
 
 
 
int main()
{
	int z=0,count;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		ptr[i]=-1;
	}
	int big = *max_element(arr, arr + n); 
    int y= 1;
    while ( big /= 10 )
    {
   y++;
}
        cout << y;
	sort(arr,arr+n);
	cin >> q;
	while(q-->0)	{
		cin >> k;
		z=0;
		if(ptr[k]!=-1)
	{	
	 cout << ptr[k] << endl;
	 continue;
	}
	else
	{
	 fact(k);
    }
	for(i=arr[0]/k;i<=arr[n-1]/k;i++)
	{
	int target = str[i];
	int first = BinarySearch(arr, n, target, 1);	// 1 for first occurrence
	int last = BinarySearch(arr, n, target, 0);	// 0 for last occurrence
	int count = last - first + 1;
	if (first != -1)
	z=z+count;
}
ptr[k]=z;
cout << z << endl;
}
	return 0;
}

