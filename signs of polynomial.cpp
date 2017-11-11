#include <iostream>
#include<algorithm>
#include<math.h>
using namespace std;


long long int horner(long long int poly[], long long int n, long long int x)
{
    long long int result = poly[0];  // Initialize result
    // Evaluate value of polynomial using Horner's method
    for (int i=1; i<=n; i++)
        result = result + poly[i]*x;
    return result;
}
long long int horners(long long int poly[], long long int n, long long int x)
{
    long long int result = poly[0];  // Initialize result
    // Evaluate value of polynomial using Horner's method
    for (int i=1; i<=n; i++)
        if(i%2==0)
        result = result - poly[i]*x;
        else
        result = result + poly[i]*x;
    return result;
}


int main()
{
	long long int n,poly[30005],count,arr[30005];
        cin >> n;
      for(count = 0; count <= n; count++)
      {
            cin >> poly[count];
            arr[count]=abs(poly[count]);
      }
     long long big = *max_element(arr, arr + n); 
    long long y= 1;
    while ( big /= 10 )
    {
   y++;
   }
   long long x = pow(10,y+1);
    long long int val=horner(poly, n, x);
    long long int pro = horners(poly,n,-x);
    if(val>0 && pro >0)
    cout<<"1 1";
    else if(val>0 && pro <0 )
    cout<<"1 -1";
    else if(val <0 && pro >0)
    cout<<"-1 1";
    else if(val<0 && pro <0)
    cout <<"-1 -1";
    else if(val==0 && pro>0)
    cout <<"0 1";
    else if(val>0 && pro==0)
    cout <<"1 0";
    else if(val==0 && pro <0)
    cout <<"0 -1";
    else if(val<0 && pro==0)
    cout<<"-1 0";
    else
    cout <<"0 0";
    return 0;
}
