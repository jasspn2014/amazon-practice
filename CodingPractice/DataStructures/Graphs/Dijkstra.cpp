#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

void addEdge(int u, int v, int w, vector<pii> adj[])
{
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});
}

vector<int> dist(1000,INT_MAX);


void Dijkstra(vector<pii> adj[], int V, int src)
{
    vector<bool> visited(V,false);
    multiset<pair<int,int>> ms;

    ms.insert({0,src});
    dist[src] = 0;

    while(!ms.empty())
    {
        pair<int,int> p = *ms.begin();
        ms.erase(ms.begin());

        int x = p.second;
        int w = p.first;

        if(visited[x])
            continue;

        visited[x] = true;

        for(auto i : adj[x])
        {
            int e = i.second;
            int w = i.first;

            if(dist[x] + w < dist[e]){
                dist[e] = dist[x] + w;
                ms.insert({dist[e],e});
            }
        }
    }
}

int main()
{
    int V,E;
    cin>>V>>E;

    vector<pii> adj[V];

    for(int i=0;i<E;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        addEdge(u,v,w,adj);
    }

    Dijkstra(adj,V,0);
    for(int i=0;i<V;i++)
        cout<<0<<"->"<<i<<" "<< dist[i]<<endl;

}

//Test Case 2:
//9 14
//0 1 4
//0 7 8
//1 7 11
//1 2 8
//7 8 7
//7 6 1
//6 5 2
//6 8 6
//2 8 2
//2 3 7
//2 5 4
//3 5 14
//3 4 9
//4 5 10
