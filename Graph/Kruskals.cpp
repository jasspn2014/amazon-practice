#include<bits/stdc++.h>
#define ppi pair<int,pair<int,int>>
using namespace std;

void addEdge(int u, int v, int w, vector<pair<int,int>> adj[]){
	adj[u].push_back({v,w});
	//adj[v].push_back({u,w});
}
int parent[1000];

int findDS(int u){
	if(parent[u] == u){
		return u;
	}
	return findDS(parent[u]);
}

void union1(int u, int v){
	int pu = findDS(u);
	int pv = findDS(v);

	if(pu == pv)
		return;
	else
		parent[pu] = pv;
}

void kruskalsMST(vector<pair<int,int>> adj[], int V, int E){
	priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
	for(int i=0;i<V;i++){
		for(auto j : adj[i]){
			pq.push({j.second,{i,j.first}});
		}
	}


	for(int i=0;i<V;i++)
		parent[i] = i;

	int cost = 0;
	while(!pq.empty()){
		ppi p = pq.top();
		pq.pop();
		// cout << p.first << " " << p.second.first << " " << p.second.second << endl;
		// For all Edges

		int u = p.second.first;
		int v = p.second.second;

		if(findDS(u) != findDS(v)){
			union1(u,v);
			cost += p.first;
		}
	}

	cout << cost;
}


int main(){
	int V,E;
	cin >> V >> E;
	vector<pair<int,int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,w;
		cin >> u >> v >> w;
		addEdge(u,v,w,adj);
	}

	kruskalsMST(adj,V,E);

}
