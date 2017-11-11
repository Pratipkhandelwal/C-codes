   #include <iostream>
   #include <vector>
   #include<bits/stdc++.h>
   #include <algorithm>    // std::min_element, std::max_element
   
    using namespace std;

    vector <int> adj[10000];
    bool visited[10000];
    int z=0;
    void dfs(int s) {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    {
        	z++;
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
    }

    void initialize() {
        for(int i = 0;i < 10;++i)
         visited[i] = false;
    }

    int main() {
        int nodes, edges, x, y, connectedComponents = 0 ,k=0,arr[100000];
        cin >> nodes >> edges;     
        if(edges==0)
        {
        	cout << "0";
        	return 0;
		}
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;     
     //Undirected Graph 
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }

        initialize();                           //Initialize all nodes as not visited
        int val=0;
        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);
          val=max(val,z/2);
            z=0;
         }
    }
    cout << val <<endl;
}

