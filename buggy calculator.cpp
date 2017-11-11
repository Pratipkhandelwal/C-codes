#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
 
int main()
{
    lli t,a,b,d1,d2,d,x,i,ans,mul;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        i=0;
        ans=0;
        mul=1;
        while(a!=0)
        {
            d1=a%10;
            d2=b%10;
            d=d1+d2;
            x=d%10;
            ans=ans+x*mul;
            mul=mul*10;
            i++;
            a=a/10;
            b=b/10;
        }
        if(b!=0)
        {
            d1=1;
            while(i--)
                d1=d1*10;
            d=b*d1;
            ans=ans+d;
        }
    cout<<ans<<endl;
    }
 
    return 0;
}

