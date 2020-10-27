#include<iostream>
#include<stack>
#include<vector>
#include<math.h>
#include<queue>
#include<cstring>
#include<climits>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int constructSegmentTree(int arr[], vector<int> &tree, int ss, int se, int si)
{
    if(ss == se)
    {
        tree[si] = arr[ss];
        return arr[ss];
    }

    int mid = (ss+se)/2;
    tree[si] = constructSegmentTree(arr,tree,ss,mid,2*si+1) + constructSegmentTree(arr,tree,mid+1,se,2*si+2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1;

    vector<int> tree(max_size,-1);
    constructSegmentTree(arr,tree,0,n-1,0);

    for(int i=0;i<max_size;i++)
    {
        cout<<tree[i]<<" ";
    }
    return 0;
}

// Code By Jasmeet Singh