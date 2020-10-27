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


void DFSUtil(vector<int> adj[], int V, int s, vector<bool> &visited){
	visited[s] = true;
	cout << s << " ";
	for(int i : adj[s]){
		if(!visited[i]){
			DFSUtil(adj,V,i,visited);
		}
	}
}
void DFS(vector<int> adj[], int V, int s){
	vector<bool> visited(V,false);
	DFSUtil(adj,V,s,visited);
}

int main(){
	int V = 5; // Number of Vertices

	vector<int> adj[V];
	addEdgeUndirected(0,1,adj);
	addEdgeUndirected(0,4,adj);
	addEdgeUndirected(1,2,adj);
	addEdgeUndirected(1,3,adj);
	addEdgeUndirected(1,4,adj);
	addEdgeUndirected(3,2,adj);
	addEdgeUndirected(3,4,adj);

	DFS(adj,V,0);

}
