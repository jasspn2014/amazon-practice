#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

void addEdge(int u, int v, int w, vector<pii> adj[]){
	adj[u].push_back({w,v});
	adj[v].push_back({w,u});
}

int prims(vector<pii> adj[], int V, int s){

	vector<bool> visited(V,false);
	priority_queue<pii,vector<pii>,greater<pii>> pq;

	pq.push({0,s});

	int cost = 0;

	while(!pq.empty()){
		pii curr = pq.top();
		pq.pop();
		s = curr.second;
		if(visited[s] == true)
			continue;

		visited[s] = true;
		cost += curr.first;

		for(auto i : adj[s]){
			int u = i.second;
			if(!visited[u]){
				pq.push(i);
			}
		}

	}
	return cost;

}

int main(){
	int V,E;
	cin >> V >> E;
	vector<pii> adj[V];

	for(int i=0;i<E;i++){
		int u,v,w;
		cin >> u >> v >> w;
		addEdge(u,v,w,adj);
	}

	int cost = prims(adj,V,0);

	cout << cost << endl;

}
