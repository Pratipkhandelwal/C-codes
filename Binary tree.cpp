#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
vector <int> G[MAXN], col_list[MAXN];
int col[MAXN], ans[MAXN];
int par,y,c,k=1;
void dfs(int pos)
{
    
	if(col_list[col[pos]].empty()||pos<c+1)
			ans[pos] = -1;
	else
		ans[pos] = col[pos];
	/*	ans[pos] = col_list[col[pos]].back();*/
	    col_list[col[pos]].push_back(pos);
	for (int i = 0; i < G[pos].size(); ++i)
	{
		dfs(G[pos][i]);
	}
	col_list[col[pos]].pop_back();
}
int main()
{
	int n;
	cin>>n>>c;
		for (int i = 1; i <= n; ++i)
	{
		cin>>col[i];
	}
	for (int i = 2; i <= n; ++i)
	{
		cin>>par>>y;
		G[par].push_back(i);
	}
	dfs(1);
	for (int i = 1; i <= n; ++i)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}

