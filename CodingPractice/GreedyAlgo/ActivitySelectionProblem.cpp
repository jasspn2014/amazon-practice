#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

struct Activity
{
    int start;
    int finish;
};
typedef struct Activity activites;

bool cmp(activites a,activites b)
{
    if(a.finish < b.finish)
        return true;
    else
        return false;
}
vector<int> ActivitySelection(int start[], int finish[],int n)
{
    vector<activites> v(n);
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        v[i].start = start[i];
        v[i].finish = finish[i];
    }

    sort(v.begin(),v.end(),cmp);

    res.push_back(0);
    int prevSelected = 0;
    for(int i=1;i<n;i++)
    {
        if(v[i].start >= v[prevSelected].finish){
            res.push_back(i);
            prevSelected = i;
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int start[]  =  {1, 3, 0, 5, 8, 5};
    int finish[] =  {2, 4, 6, 7, 9, 9};
    int n = 6;
    vector<int> res = ActivitySelection(start, finish, n);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}


// Code By Jasmeet Singh