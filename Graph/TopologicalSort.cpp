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

void topoSort(vector<int> adj[], int V){
	vector<int> indegree(V,0);

	for(int i=0;i<V;i++){
		for(auto j : adj[i]){
			indegree[j]++;
		}
	}
	queue<int> q;
	int cnt = 0;
	for(int i=0;i<V;i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}


	while(!q.empty()){
		int curr = q.front();
		cout << curr << " ";
		q.pop();
		for(int i : adj[curr]){
			indegree[i]--;
			if(indegree[i] == 0){
				q.push(i);
			}
		}
		cnt++;
	}

	if(cnt != V){
		cout << "Cycle Found";
	}
}

int main(){
	int V = 6;
	vector<int> adj[V];
	addEdgeDirected(5, 2, adj);
  addEdgeDirected(5, 0, adj);
  addEdgeDirected(4, 0, adj);
  addEdgeDirected(4, 1, adj);
  addEdgeDirected(2, 3, adj);
  addEdgeDirected(3, 1, adj);

	topoSort(adj,V);


}
