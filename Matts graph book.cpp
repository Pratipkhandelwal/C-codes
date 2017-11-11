#include<bits/stdc++.h>
#define ll int
using namespace std;
ll edges=0,ans=0;
vector<ll> adj[100005];
bool visited[100005];
 
void dfs(ll s){
 visited[s]=true;
 edges++;
 for(ll i=0;i<adj[s].size();i++){
  if(visited[adj[s][i]]==false)
   dfs(adj[s][i]);
   }   

}

int main(){
 ll n,m,i,x,y,j,head;
 cin>>n;
 cin>>m;
 while(m--){
  cin>>x>>y;
   adj[x].push_back(y);
 }
 cin >> head;
 dfs(head);
 if(m-edges>=(m-1))
 cout << "Connected" <<endl;
 else
  cout << "Not Connected" <<endl;
 return 0;
}

