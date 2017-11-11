#include<bits/stdc++.h>
#define ll int
using namespace std;
ll edges=0;
vector<ll> adj[100005];
bool visited[100005];
 
void dfs(ll s){
 visited[s]=true;
 for(ll i=0;i<adj[s].size();i++){
  edges++;
  if(visited[adj[s][i]]==false){
   dfs(adj[s][i]);
  }
 }   

}
 
void initialise(){
 for(ll i=0;i<100005;i++)
  visited[i]=false;
}
 
int main(){
 ll n,m,i,x,y,j,maxedges;
 cin>>n>>m;
 while(m--){
  cin>>x>>y;
   adj[x].push_back(y);
   adj[y].push_back(x);
  
  
 }
 initialise();
 maxedges=0;
 for(i=1;i<=n;i++){
  if(visited[i]==false){
   dfs(i);
   maxedges=max(maxedges,edges/2);
   edges=0;
  }
  // cout << maxedges <<" ";   
 }
 cout<<maxedges<<endl;
}

