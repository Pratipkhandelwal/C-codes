#include <iostream>
using namespace std;
 
// returns value of poly[0]x(n-1) + poly[1]x(n-2) + .. + poly[n-1]
long long horner(long long poly[], long long n, long long x)
{
    long long result = poly[0];  // Initialize result
 
    // Evaluate value of polynomial using Horner's method
    for (int i=1; i<n; i++)
        result = result*x + poly[i];
 
    return result;
    cout << result;
}
 
// Driver program to test above function.
int main()
{
	long long n,poly[100000],count,sum=0,sum1=0,a,b;
          cin >> n;
      for(count = n; count >= 0; count--)
      {
            cin >> poly[count];
      }
        long long x = 100000;
    sum=horner(poly, n, x);
    sum1=horner(poly,n,-x);
       if (sum > 0) a=1;
      if (sum < 0) a=-1;
      if (sum==0)  a=0;
      cout << sum;
    return 0;
}
