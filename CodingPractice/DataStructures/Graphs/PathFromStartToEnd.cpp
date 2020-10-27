//#include<bits/stdc++.h>
//using namespace std;
//
//bool DFS(int x,int y,vector<vector<bool>> &visited,int n,int m,vector<vector<int>> &mat,int dest_x,int dest_y)
//{
//    if(x == dest_x && y == dest_y)
//        return true;
//
//    if(x < 0 || y < 0)
//        return false;
//
//    if(x >= n || y >= m)
//        return false;
//
//    if(visited[x][y])
//        return false;
//
//    if(mat[x][y] == 0)
//        return false;
//
//    visited[x][y] = true;
//
//    if(DFS(x-1,y,visited,n,m,mat,dest_x,dest_y))
//        return true;
//
//    if(DFS(x+1,y,visited,n,m,mat,dest_x,dest_y))
//        return true;
//
//    if(DFS(x,y-1,visited,n,m,mat,dest_x,dest_y))
//        return true;
//
//    if(DFS(x,y+1,visited,n,m,mat,dest_x,dest_y))
//        return true;
//
//    return false;
//}
//
//int main()
//{
//    int n,m;
//    cin>>n>>m;
//    vector<vector<int>> mtrx(n,vector<int>(m));
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            cin>>mtrx[i][j];
//        }
//    }
//    vector<vector<bool>> visited(n,vector<bool>(m,false));
//    //visited[0][0] = true;
//    if(DFS(0,0,visited,n,m,mtrx,n-1,m-1))
//        cout<<"Yes";
//    else
//        cout<<"No";
//}


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long k;
    cin>>n;
    cin>>k;

    vector<long long> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr.begin(),arr.end());
    int count = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum <= k)
            count++;
    }

    cout<<count<<endl;
}

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}