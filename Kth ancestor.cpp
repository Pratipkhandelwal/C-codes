#include <bits/stdc++.h>
using namespace std;
int adj[100005];
int col[100005];
int c;
int color(int i, int k){
if(adj[i]== 0||i<c+1){
return -1;
}
else if(k!=col[adj[i]]){
return color(adj[i], k);
}
else
return col[i];
}

int main()
{
int n;
cin>>n>>c;
adj[1]=0;
for (int i = 1; i <= n; ++i)
{
cin>>col[i];
}
for (int i = 2; i <= n; ++i)
{
int x,y;
cin>>x>>y;
adj[i]=x;
}

int x, col_list[1000005];

for(int i=1; i<=n; i++){
int k=col[i];
x=color(i,k);
col_list[i]=x;
}
for(int i=1; i<=n; i++){
cout<<col_list[i]<<" ";
}
return 0;
}

