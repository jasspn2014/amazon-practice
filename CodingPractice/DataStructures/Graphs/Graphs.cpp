//
// Created by jassp on 07-07-2020.
//

#include<bits/stdc++.h>
using namespace std;

void addEdgeUndirectedGraph(vector<int> *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void addEdgeDirectedGraph(vector<int> *adj, int u, int v)
{
    adj[u].push_back(v);
}

void printAdjacent(vector<int> adj[], int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<"Adjacent of "<<i;
        for(int x:adj[i])
            cout<<"->"<<x;

        cout<<endl;
    }
}

void BFS(vector<int> adj[], int V, int s)
{
    queue<int> q;
    q.push(s);
    vector<bool> visited(V,false);
    visited[s] = true;

    while(!q.empty())
    {
        s = q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++)
        {
            if(!visited[adj[s][i]])
            {
                q.push(adj[s][i]);
                visited[adj[s][i]] = true;
            }
        }

        cout<<s<<" ";
    }
}


void DFS(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    cout<<s<<" ";
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
            DFS(adj,adj[s][i],visited);
    }
}


bool DCUGUtil(vector<int> adj[], int s, vector<bool> &visited, int parent)
{
    visited[s] = true;
    for(int i = 0;i<adj[s].size();i++) {
        if (visited[adj[s][i]] == false){
            if(DCUGUtil(adj, adj[s][i], visited, s))
                return true;
        }
        else if(adj[s][i] != parent)
            return true;
    }
    return false;
}

bool DetectCycleInAnUndirectedGraph(vector<int> adj[], int V)
{
    vector<bool> visited(V,false);

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            if(DCUGUtil(adj,i,visited,-1))
                return true;
    }
    return false;
}
bool DCDGUtil(vector<int> adj[], int s, vector<bool> &visited, vector<bool> recStack)
{
    visited[s] = true;
    recStack[s] = true;
    for(int i = 0;i<adj[s].size();i++) {
        if (visited[adj[s][i]] == false){
            if(DCDGUtil(adj, adj[s][i], visited, recStack))
                return true;
        }
        else if(recStack[adj[s][i]])
            return true;
    }
    recStack[s] = false;
    return false;
}

bool DetectCycleInaDirectedGraph(vector<int> adj[], int V)
{
    vector<bool> visited(V,false);
    vector<bool> recursiveCalls(V,false);
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            if(DCDGUtil(adj,i,visited,recursiveCalls))
                return true;
    }
    return false;
}

void topologicalSortUtil(vector<int> adj[], int s, vector<bool> &visited, stack<int> &st)
{
    visited[s] = true;
    vector<int> :: iterator it;
    for(it = adj[s].begin();it != adj[s].end();it++)
    {
        if(!visited[*it])
            topologicalSortUtil(adj,*it,visited,st);
    }

    st.push(s);
}

void topologicalSort(vector<int> adj[], int V)
{
     vector<bool> visited(V,false);
     stack<int> st;

     for(int i=0;i<V;i++)
     {
         if(!visited[i])
         {
             topologicalSortUtil(adj,i,visited,st);
         }
     }

     while(!st.empty())
     {
         cout<<st.top()<<" ";
         st.pop();
     }
}


bool BFSPath(vector<int> adj[], int s, int d)
{
    if(s == d)
        return true;

    int V = 4*4+2;
    vector<bool> visited(V,false);
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty())
    {
        s = q.front();
        q.pop();

        for(int i = 0;i<adj[s].size();i++)
        {
            if(adj[s][i] == d)
                return true;
            if(!visited[adj[s][i]])
            {
                visited[adj[s][i]] = true;
                q.push(adj[s][i]);
            }
        }
    }

    return false;


}

bool isValid(char M[][4], int N, int i, int j)
{
    if((i<0 || i>N-1) || (j<0 || j>N-1) || M[i][j] == '0')
        return false;
    return true;
}

bool findPath(char M[][4])
{
    int N = 4;
    int V = N*N+2;
    vector<int> adj[V];

    int k = 1;
    int s,d;

    for(int i=0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            if(M[i][j] != '0')
            {
                if(isValid(M,N,i,j+1))
                    addEdgeUndirectedGraph(adj,k,k+1);
                if(isValid(M,N,i,j-1))
                    addEdgeUndirectedGraph(adj,k,k-1);
                if(i > 0 && isValid(M,N,i-1,j))
                    addEdgeUndirectedGraph(adj,k,k-N);
                if(i<N-1 && isValid(M,N,i+1,j))
                    addEdgeUndirectedGraph(adj,k,k+N);

            }

            if(M[i][j] == 's')
                s = k;

            if(M[i][j] == 'd')
                d = k;

            k++;
        }
    }

    return BFSPath(adj,s,d);
}

int main()
{
//    int V = 5;
//    vector<int> adj[V];
////    addEdgeUndirectedGraph(adj,0,1);
////    addEdgeUndirectedGraph(adj,1,2);
////    //addEdgeUndirectedGraph(adj,1,3);
////    addEdgeUndirectedGraph(adj,2,3);
////    addEdgeUndirectedGraph(adj,2,4);
////    addEdgeUndirectedGraph(adj,4,5);
//
//    addEdgeDirectedGraph(adj,0,1);
//    addEdgeDirectedGraph(adj,1,3);
//    addEdgeDirectedGraph(adj,3,4);
//    addEdgeDirectedGraph(adj,2,3);
//    addEdgeDirectedGraph(adj,2,4);
//
//    printAdjacent(adj,V);
//
//    cout<<endl;
//    cout<<"BFS of Graph: ";
//    BFS(adj,V,0);
//
//    cout<<endl;
//    vector<bool> visited(V,false);
//    cout<<"DFS of Graph: ";
//    DFS(adj,0,visited);
//
//    cout<<endl;
//    cout<<"Topological Sort: ";
//    topologicalSort(adj,V);
//
//
//    cout<<endl;
//    cout<<"Is Cycle Present? ";
//    if(DetectCycleInaDirectedGraph(adj, V))
//        cout<<"YES";
//    else
//        cout<<"NO";



    char matrix[][4] = {{'0','*','0','s'},
                       {'*','0','*','*'},
                       {'0','0','*','*'},
                       {'d','*','*','*'}};


    if(findPath(matrix))
        cout<<"Yes";
    else
        cout<<"No";


}



