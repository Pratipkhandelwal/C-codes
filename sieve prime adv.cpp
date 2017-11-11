#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define mod 1000000007
#define llt ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define mkp make_pair
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define rep(i,a,b) for (ll i = a; i<b; ++i)
using namespace std;
int main()
{
boost;
ll n;
cin>>n;
bool prime[1000001];
memset(prime, true, sizeof(prime));
prime[0] = false;
prime[1] = false;

for(ll i=2;i<=sqrt(n);i++){
if(prime[i]){
for(ll j = i*i;j<=n;j+=i){
prime[j] = false;
}
}
}

ll c = 0;
for(ll j=2;j<=n;j++)
if(prime[j])c++;

cout<<c<<"\n";

return 0;
}

