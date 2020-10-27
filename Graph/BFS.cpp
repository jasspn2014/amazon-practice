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

void BFS(vector<int> adj[], int V, int s){
	vector<bool> visited(V,false);
	visited[s] = true;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for(int i : adj[tmp]){
			if(!visited[i]){
				q.push(i);
				visited[i] = true;
			}
		}
	}
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

	BFS(adj,V,0);

}
