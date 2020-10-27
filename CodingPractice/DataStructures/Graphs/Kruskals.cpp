#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

void addEdge(int u, int v, int w, vector<pii> adj[])
{
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});
}

vector<int> parent(1000);

int findDS(int a)
{
    if(parent[a] == a)
        return a;
    else
        return findDS(parent[a]);
}

void unionDS(int a, int b)
{
    int pa = findDS(a);
    int pb = findDS(b);

    if(pa == pb)
        return;
    else
        parent[pa] = pb;

}

int kruskals(vector<pii> adj[], int V)
{
    vector<pair<int,pair<int,int>>> edges;
    for(int i=0;i<V;i++)
    {
        for(auto j : adj[i])
        {
            edges.push_back({j.first,{i,j.second}});
        }
    }

    sort(edges.begin(),edges.end());


    for(int i=0;i<V;i++)
        parent[i] = i;
    int cost = 0;
    for(int i=0;i<edges.size();i++)
    {
        int x = edges[i].second.first;
        int y = edges[i].second.second;

        if(findDS(x) != findDS(y))
        {
            unionDS(x,y);
            cost += edges[i].first;
        }
    }

    return cost;
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

    int cost = kruskals(adj,V);

    cout<<"Minimum Cost: "<<cost;

}

//    Test Case 1:
//    4 5
//    0 1 1
//    0 2 3
//    0 3 4
//    1 2 2
//    3 2 5

// Test Case 2:
   // 9 14
   // 0 1 4
   // 0 7 8
   // 1 7 11
   // 1 2 8
   // 7 8 7
   // 7 6 1
   // 6 5 2
   // 6 8 6
   // 2 8 2
   // 2 3 7
   // 2 5 4
   // 3 5 14
   // 3 4 9
   // 4 5 10
