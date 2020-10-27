#include<bits/stdc++.h>
using namespace std;

void addEdgeDirected(int u, int v, vector<int> adj[]){
	adj[u].push_back(v);
}

void addEdgeDirectedWeighted(int u, int v, int w, vector<pair<int,int>> adj[]){
	adj[u].push_back({v,w});
}

void addEdgeUndirected(int u, int v, vector<int> adj[]){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void addEdgeUndirectedWeighted(int u, int v, int w, vector<pair<int,int>> adj[]){
	adj[u].push_back({v,w});
	adj[v].push_back({u,w});
}

bool isCyclicUtil(int v,vector<int> adj[], vector<bool> &visited, int parent){
	visited[v] = true;
	for(auto i : adj[v]){
		if(!visited[i]){
			if(isCyclicUtil(i,adj,visited,v)){
				return true;
			}
		}
		else if(i != parent){
			return true;
		}
	}

	return false;
}

bool isCycle(vector<int> adj[], int V){
	vector<bool> visited(V,false);
	for(int i=0;i<V;i++){
		if(!visited[i]){
			if(isCyclicUtil(i,adj,visited,-1)){
				return true;
			}
		}
	}

	return false;
}

int main(){
	int V = 5;
	vector<int> adj[V];

 addEdgeUndirected(1, 0, adj);
 addEdgeUndirected(0, 2, adj);
 //addEdgeUndirected(2, 1, adj);
 addEdgeUndirected(0, 3, adj);
 addEdgeUndirected(3, 4, adj);

 isCycle(adj,V) ? cout << "Cycle Present" : cout << "No Cycle Present";

}
