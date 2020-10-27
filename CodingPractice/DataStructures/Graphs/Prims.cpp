#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

void addEdge(int u, int v, int w, vector<pii> adj[])
{
    adj[u].push_back({w,v});
    adj[v].push_back({w,u});
}

int prims(vector<pii> adj[], int V, int x)
{
    vector<bool> visited(V,false);
    priority_queue<pii,vector<pii>, greater<pii>> pq;

    pq.push({0,x});
    int cost = 0;
    while(!pq.empty())
    {
        pii curr = pq.top();
        pq.pop();
        x = curr.second;

        if(visited[x] == true)
            continue;

        visited[x] = true;
        cost += curr.first;

        for(auto i : adj[x])
        {
            int y = i.second;
            if(!visited[y])
            {
                pq.push(i);
            }
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

    int cost = prims(adj,V,0);

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
//    9 14
//    0 1 4
//    0 7 8
//    1 7 11
//    1 2 8
//    7 8 7
//    7 6 1
//    6 5 2
//    6 8 6
//    2 8 2
//    2 3 7
//    2 5 4
//    3 5 14
//    3 4 9
//    4 5 10
