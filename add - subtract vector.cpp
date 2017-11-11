#include <bits/stdc++.h>
using namespace std;
int a[105];
vector <int> v;
int main()
{
    int j,t,n,i,ans,c,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=100;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]>i)
                {
                    v.push_back((a[j]-i)*5);
                }
                else
                {
                    v.push_back((i-a[j])*3);
                }
            }
            sort(v.begin(),v.end());
            c=0;
            for(j=0;j<k;j++)
            {
                c+=v[j];
                cout << v[j] << " ";
            }
            cout << endl;
            ans=min(ans,c);
            v.clear();
        }
        cout<<ans<<endl;
    }
    return 0;
}

