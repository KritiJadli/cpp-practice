#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>&adj,int node,vector<int>visited){
    visited[node]=1;
    for(int neigh:adj[node]){
        if(!visited[neigh]){
            dfs(adj,neigh,visited);
        }
    }
}
int main(){
      int n = 6;   // number of vertices

    // edges list (undirected graph)
    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {3, 5},
        {5, 4},
        {4, 3}
    };

    int source = 0;
    int destination = 5;
    vector<vector<int>>adj(n);
    for(auto &e:edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    } 
    vector<int>visited(n,0); 
    dfs(adj,source,visited);
    if(visited[destination]) cout<<"path exists";
    else cout<<"path doesn't exist";
    return 0;

}