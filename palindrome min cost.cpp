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
        int sum = 0,j=n-1;
        int x=n/2,ctr=0;
        for(int i=0;i<x;i++)
        {
          if(S[i]==S[n-1-i])
          ctr++;
        }
        if(ctr==x)
        {
        	cout << 0 << endl;
        	continue;
		}
		if(n%2==0)
		{
		sort(S.begin(),S.end());
        int p,q;
        int val=0;
        
        for(p=0;p<x;p++)
        {
            for(q=97;q<=122;q++)
            {
               if(S[p]==q)
               val+=q-96;
            }
        }
        cout<<val<<endl;
		}
        else
		 {
        for(int i=0;i<n/2;i++)
        {
        		if(int(S[i])<int(S[j]))
        		{
        		sum = sum + int(S[i])-96;
        		j=j-1;	
				}
        		else
        		{
        		sum = sum + int(S[j])-96;
        		j=j-1;	
				}
    }
		cout << sum << endl;
	}
}
	return 0;
}
