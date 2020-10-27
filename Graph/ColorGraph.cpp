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

void colorGraph(vector<int> adj[], int V){
	vector<int> res(V,-1);
	res[0] = 0;
	vector<int> availableColors(V,false);

	for(int i=1;i<V;i++){

		for(auto j : adj[i])
			if(res[j] != -1)
				availableColors[res[j]] = true;


		int cr;
		for(cr = 0;cr < V;cr++)
			if(availableColors[cr] == false)
				break;


		res[i] = cr;

		for(auto j : adj[i])
			if(res[j] != -1)
				availableColors[res[j]] = false;

	}

	for(int i=0;i<V;i++)
		cout << res[i] << " ";

}

int main(){
	int V = 5;
	vector<int> adj[V];
	addEdgeUndirected(0, 1, adj);
  addEdgeUndirected(0, 2, adj);
  addEdgeUndirected(1, 2, adj);
  addEdgeUndirected(1, 3, adj);
  addEdgeUndirected(2, 3, adj);
  addEdgeUndirected(3, 4, adj);

	colorGraph(adj,V);

}
