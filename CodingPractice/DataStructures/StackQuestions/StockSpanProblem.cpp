#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

vector<int> stockSpan(vector<int> &v)
{
    stack<int> st;
    vector<int> res;
    st.push(0);
    res.push_back(1);
    for(int i=1;i<v.size();i++)
    {
        while(!st.empty() && v[st.top()] <= v[i])
            st.pop();

        if(st.empty())
            res.push_back(i+1);
        else
            res.push_back(i-st.top());

        st.push(i);
    }

    return res;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> prices(n);

    for(int i=0;i<n;i++)
        cin>>prices[i];

    vector<int> res = stockSpan(prices);

    for(int i : res)
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
}