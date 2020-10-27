
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

vector<lli> nextLargestElementToLeft(vector<lli> &v)
{
    stack<int> st;
    vector<lli> res;
    for(int i = 0;i<v.size();i++)
    {
        if(st.empty())
            res.push_back(-1);

        else if(st.top() > v[i])
        {
            res.push_back(st.top());
        }

        else if(st.top() < v[i])
        {
            while(!st.empty() && st.top() < v[i])
            {
                st.pop();
            }

            if(st.empty())
                res.push_back(-1);
            else
                res.push_back(st.top());
        }
        st.push(v[i]);
    }
    return res;
}

void solve()
{
    lli n;
    cin>>n;
    vector<lli> v(n);
    for(lli i=0;i<n;i++)
        cin>>v[i];

    vector<lli> res = nextLargestElementToLeft(v);
    for(auto i : res)
        cout<<i<<" ";

    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
    //Code by Jasmeet Singh (jasspn2014)
}