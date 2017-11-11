
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        int n=S.length();
        int x=n/2,ctr=0;
        
        for(int i=0;i<x;i++)
        {
          if(S[i]==S[n-1-i])
          ctr++;
        }
        if(ctr==x)
        cout<<0<<endl;
        else
        {
            if(n%2==0)
            {sort(S.begin(),S.end());
        
        long long int i=0,j=0;
        long long int sum=0;
        
        for(i=0;i<x;i++)
        {
            for(j=97;j<=122;j++)
            {
               if(S[i]==j)
               sum+=j-96;
            }
        }
        cout<<sum<<endl;
        }
        else
        {
            int i=0,j=0;
        int sum=0;
        string str;
        string S1=S.substr(0,n/2);
        string S2=S.substr(n/2+1,n/2+1);
        cout << S1 <<" " << S2 << endl;
        sort(S1.begin(),S1.end());
        sort(S2.begin(),S2.end());
        for(i=0;i<x;i++)
       { if(S1[i]<S2[i])
        str[i]=S1[i];
        else
        str[i]=S2[i];
            for(j=97;j<=122;j++)
            {
               if(str[i]==j)
               sum+=j-96;
            }
        }
        cout<<sum<<endl;
        }
    }
        }
return 0;
}

