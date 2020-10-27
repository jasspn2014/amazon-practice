#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

vector<lli> nextSmallestElementToRight(vector<lli> &v)
{

}

void solve()
{
    lli n;
    cin>>n;
    vector<lli> v(n);
    for(lli i=0;i<n;i++)
        cin>>v[i];

    vector<lli> res = nextSmallestElementToRight(v);
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