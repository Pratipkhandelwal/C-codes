// Program to find minimum number of cabs 
#include<iostream>
#include<algorithm>
using namespace std;
 
// Returns minimum number of cabs reqquired
int findPlatform(int arr[], int dep[], int n)
{
   sort(arr, arr+n);
   sort(dep, dep+n);
 
   int plat_needed = 1, result = 1;
   int i = 1, j = 0;
 
   while (i < n && j < n)
   {
      if (arr[i] <= dep[j])
      {
          plat_needed++;
          i++;
          if (plat_needed > result)              
		   result = plat_needed;
      }
      else
	        {
          plat_needed--;
          j++;
      }
   }
 
   return result;
}
 
// Driver program to test methods of graph class
int main()
{
	int n,i,h1,m1,h2,m2,t1,t2,arr[100000],dep[100000];
       cin >> n;
       for(int i=1;i<=n;i++)
	{
		cin>>h1>>m1>>h2>>m2;
		h1=h1*60+m1;
		h2=h2*60+m2;
		arr[i]=h1;
		dep[i]=h2;
    }
   
       cout << findPlatform(arr, dep, n);
 
    return 0;
}

