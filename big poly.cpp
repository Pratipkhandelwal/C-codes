#include <bits/stdc++.h>
using namespace std;
 long long int i=0;
// returns value of poly[0]x(n-1) + poly[1]x(n-2) + .. + poly[n-1
long long int horner(long long int poly[],long long int n,long long int x)
{
    long long int result = poly[0];  // Initialize result
 
    // Evaluate value of polynomial using Horner's method
    for (i=1; i<n; i++)
        result = result*x + poly[i];
 
    return result;
}
long long int horners(long long int poly[],long long int n,long long int x)
{
    long long int result = -poly[0];  // Initialize result
 
    // Evaluate value of polynomial using Horner's method
    for (i=1; i<n; i++)
        result = (result*x) + poly[i];
    return result;
}
 
// Driver program to test above function.
int main()
{
    long long int n;
    cin>>n;
   long long  int poly[1000005];
    for(i=n;i>=0;i--)cin>>poly[i];
   long long int y=pow(1000,1000);
    long long val=horner(poly, n, y);
    long long pro=horners(poly, n, -y);
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

