
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

vector<lli> nextLargestElementToRight(vector<lli> &v)
{
    stack<lli> st;
    vector<lli> res;
    res.push_back(-1);
    st.push(v[v.size()-1]);
    for(lli i=v.size()-2;i>=0;i--)
    {
        if(!st.empty() && v[i] < st.top()){
            res.push_back(st.top());
            st.push(v[i]);
        }
        else{
            while(!st.empty() && v[i] > st.top())
                st.pop();

            if(st.empty())
                res.push_back(-1);
            else
                res.push_back(st.top());

            st.push(v[i]);
        }
    }

    reverse(res.begin(),res.end());

    return res;
}

void solve()
{
    lli n;
    cin>>n;
    vector<lli> v(n);
    for(lli i=0;i<n;i++)
        cin>>v[i];

    vector<lli> res = nextLargestElementToRight(v);
    for(auto i : res)
        cout<<i<<" ";

    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
    //Code by Jasmeet Singh (jasspn2014)
