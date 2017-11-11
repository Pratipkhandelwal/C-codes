   #include<iostream>
    #include <vector>
   #include<bits/stdc++.h>
   #include <algorithm>    // std::min_element, std::max_element

   using namespace std;
   
    vector <int> v[100005] ;   //Vector for maintaining adjacency list explained above
    int level[100005]; //To determine the level of each node
    bool vis[100005]; //Mark the node if visited 
    queue <int> q;
    int k=0,a;
    void bfs(int s) {
        q.push(s);
        level[ s ] = 0 ;  //Setting the level of the source node as 0
        vis[ s ] = true;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            //Setting the level of each node with an increment in the level of parent node          
                    level[ v[ p ][ i ] ] = level[ p ]+1;   
                    if(level[ v[ p ][ i ] ]==a)
                    k++;
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
      }
            }
        }
        
    }
    int main() {
        int nodes,x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        for(int i = 0;i < nodes-1;++i) {
         cin >> x >> y;     
     //Undirected Graph 
         v[x-1].push_back(y-1);   
        }
        cin >> a;
        cout << endl;
        for(int i = 0;i <nodes-1;++i) {
         if(vis[i] == false)     {
             bfs(i);
         }
        }
        cout << k << endl;
    }

    
    

