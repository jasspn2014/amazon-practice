/* Graphs are categorised as Non Linear Data Structure consisting
 * of nodes and edges. The Nodes are also known as vertices and the
 * vertices are connected via edges. Graphs can be directed or undirected
 * a directed or undirected graph can also be of two type i.e weighted or unweighted.
*/

/* Graph can be represented by two methods
 * 1. Adjacency Matrix
 * 2. Adjacency List
*/

/* In Adjacency Matrix the Space Complexity is O(V^2) where V
 * is number of vertices in the graph and if we need to find
 * the connectivity between the nodes we can do that in O(1)
 * so Time comlexity is O(1);
*/

/* Talking About the Adjacency List the Space Complexity
 * is O(V+E) But Time complexity to find find wether there
 * exists a edge from u to v is O(V);
*/

#include<bits/stdc++.h>
using namespace std;

void addWeightedEdge(int u, int v, int weight, vector<pair<int,int>> adj[])
{
    adj[u].push_back({weight,v});
    adj[v].push_back({weight,u});
}

// To Add a Vertex in a Matrix in Undirected Graph
void addEdgeAdjMatrix(int u,int v, vector<vector<int>> &adjMatrix)
{
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;

//    For Directed Graph
//    adjMatrix[u][v] = 1;

}

// To Print Adjacency Matrix
void printAdjMatrix(vector<vector<int>> &adjMatrix)
{
    for(vector<int> i : adjMatrix)
    {
        for(int j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void BFSOnAdjMatrix(vector<vector<int>> &adjMatrix,int V,int start)
{

}

void addEdgeAdjList(int u, int v, vector<int> adjList[])
{
    // Directed Graphs
    adjList[u].push_back(v);

//    For Undirected Graphs
//    adjList[u].push_back(v);
//    adjList[v].push_back(u);
}

void printAdjacencyList(vector<int> adjList[],int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<i;
        for(int j : adjList[i]) {
            cout << "->" << j;
        }
        cout<<endl;
    }
}


void BFSOnAdjList(vector<int> adjList[],int V, int start)
{

    /* BFS on a Graph means that we traverse from
     * the start vertex to all its neighbour that
     * means we traverse from start to all its connected edges
     * and then from that edge to again next edge
     *
     * IN Tree or Graph BFS Queue Datastructure is Used.
     *
     * */

   vector<bool> visited(V,false);
   visited[start] = true;

   queue<int> q;
   q.push(start);
   while(!q.empty())
   {
       int i = q.front();
       cout<<i<<" ";
       q.pop();
       for(auto j : adjList[i])
       {
           if(!visited[j])
           {
               q.push(j);
               visited[j] = true;
           }
       }
   }
}


void DFSUtil(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    cout<<s<<" ";
    for(auto i : adj[s])
    {
        if(!visited[i])
            DFSUtil(adj,i,visited);
    }
}
void DFSOnAdjList(vector<int> adjList[],int V, int start)
{
    vector<bool> visited(V,false);
    DFSUtil(adjList,start,visited);
}

bool checkCycleUtil(vector<int> adj[], int start, vector<bool> &visited, vector<bool> &recStack)
{
    visited[start] = true;
    recStack[start] = true;

    for(auto it : adj[start])
    {
        if(recStack[it])
            return true;
        if(!visited[it])
        {
            visited[it] = true;
            recStack[it] = true;
            checkCycleUtil(adj,it,visited,recStack);
        }
    }
    return false;

}

bool checkCycleinDirected(vector<int> adj[], int V)
{

}

int DSFind(int a, vector<int> &parent)
{
    if(parent[a] == a)
        return a;
    else
        return DSFind(parent[a],parent);
}

void DSUnion(int a, int b, vector<int> &parent)
{
    int pa = DSFind(a,parent);
    int pb = DSFind(b,parent);

    if(pa == pb)
        return;
    else
        parent[pa] = pb;
}


int find(int a,vector<int> &parent)
{
    if(parent[a] == a)
        return a;
    else
        return find(parent[a],parent);
}

void union1(int a, int b, vector<int> &parent)
{
    int pa = find(a,parent);
    int pb = find(b,parent);

    if(pa == pb)
        return;
    else
        parent[pa] = pb;

}

int minimumCostKruskals(vector<pair<int,int>> adj[], int V)
{
    vector<pair<int,pair<int,int>>> edges;
    for(int v=0;v<V;v++)
    {
        for(auto u : adj[v])
        {
            edges.push_back({u.first,{v,u.second}});
        }
    }

    sort(edges.begin(),edges.end());

    vector<int> parent(V);
    for(int i=0;i<V;i++)
        parent[i] = i;
    int cost = 0;
    for(int i=0;i<edges.size();i++)
    {
        int x = edges[i].second.first;
        int y = edges[i].second.second;

        if(find(x,parent) != find(y,parent))
        {
            union1(x,y,parent);
            cost += edges[i].first;
        }
    }

    return cost;
}


int main()
{
    /* This Code Show the Representation Using Adjacency Matrix
     *
    int V = 5;
    vector<vector<int>> adjMatrix(V,vector<int>(V,0));
    addEdgeAdjMatrix(0,1,adjMatrix);
    addEdgeAdjMatrix(0,4,adjMatrix);
    addEdgeAdjMatrix(1,4,adjMatrix);
    addEdgeAdjMatrix(1,2,adjMatrix);
    addEdgeAdjMatrix(1,3,adjMatrix);
    addEdgeAdjMatrix(3,4,adjMatrix);
    addEdgeAdjMatrix(3,2,adjMatrix);

    printAdjMatrix(adjMatrix);
    cout<<endl;
    BFSOnAdjMatrix(adjMatrix,V,0);
*/

    /* This Code is For Adjacency List

    */

//    addEdgeAdjList(0,0,adjList);
//    addEdgeAdjList(0,1,adjList);
//    addEdgeAdjList(2,3,adjList);
//    addEdgeAdjList(3,4,adjList);
//    addEdgeAdjList(4,5,adjList);
//    addEdgeAdjList(1,2,adjList);
//    addEdgeAdjList(1,3,adjList);
//    addEdgeAdjList(4,1,adjList);
//    addEdgeAdjList(4,0,adjList);

//
//    addEdgeAdjList(0,1,adjList);
//    addEdgeAdjList(0,2,adjList);
//    addEdgeAdjList(1,2,adjList);
//    addEdgeAdjList(2,0,adjList);
//    addEdgeAdjList(2,3,adjList);
//    addEdgeAdjList(3,3,adjList);


//    addEdgeAdjList(0,1,adjList);
//    addEdgeAdjList(0,2,adjList);
//    addEdgeAdjList(1,2,adjList);
//    addEdgeAdjList(2,0,adjList);
//    addEdgeAdjList(2,3,adjList);
//    addEdgeAdjList(3,3,adjList);

    /* ^ means self loop
     *
    0 ---- 1
    |    /
    |  /
    2 ---- 3^
    *
    */


//    int V = 5;
//    vector<int> adjList[V];
//
//    addEdgeAdjList(0,1,adjList);
//    addEdgeAdjList(1,2,adjList);
//    addEdgeAdjList(2,0,adjList);
//    addEdgeAdjList(3,4,adjList);

//    printAdjacencyList(adjList,V);
//
//    cout<<"BFS "; BFSOnAdjList(adjList,V,0); cout<<endl;
//
//    cout<<"DFS "; DFSOnAdjList(adjList,V,0);    cout<<endl;
//
//    cout<<"Do Cycle Exists: ";
//    cout<<checkCycleinDirected(adjList,V);
//
//
//   For this graph MST is 11
//    int V = 5;
//    vector<pair<int,pair<int,int>>> edges;
//    edges.push_back({1,{0,1}});
//    edges.push_back({7,{0,2}});
//    edges.push_back({5,{1,2}});
//    edges.push_back({4,{1,3}});
//    edges.push_back({3,{1,4}});
//    edges.push_back({2,{3,4}});
//    edges.push_back({6,{2,4}});

//
//    // For Kruskals
//    int V = 4;
//    vector<pair<int,pair<int,int>>> edges;
//    edges.push_back({1,{0,1}});
//    edges.push_back({2,{1,2}});
//    edges.push_back({4,{0,3}});
//    edges.push_back({3,{0,2}});
//    edges.push_back({5,{3,2}});
//
//
//
//    cout<<minimumCostKruskals(edges,V);

    // For Prims Algorithm
    int V = 9;

    vector<pair<int,int>> adj[V];

    addWeightedEdge(0,1,4,adj);
    addWeightedEdge(0,7,8,adj);
    addWeightedEdge(1,2,8,adj);
    addWeightedEdge(1,7,11,adj);
    addWeightedEdge(2,3,7,adj);
    addWeightedEdge(2,5,4,adj);
    addWeightedEdge(2,8,2,adj);
    addWeightedEdge(3,4,9,adj);
    addWeightedEdge(3,5,14,adj);
    addWeightedEdge(4,5,10,adj);
    addWeightedEdge(5,6,2,adj);
    addWeightedEdge(6,7,1,adj);
    addWeightedEdge(7,8,7,adj);
    addWeightedEdge(6,8,6,adj);
    addWeightedEdge(5,6,2,adj);

    int minCostKruskal = minimumCostKruskals(adj,V);
    cout<<minCostKruskal;

    cout<<endl;

    int minCostPrims = minimumCostPrims(adj,V);
    cout<<minCostPrims;

}
