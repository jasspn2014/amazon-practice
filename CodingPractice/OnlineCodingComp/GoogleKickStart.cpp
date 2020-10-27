#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

ll minDiff(ll key, ll value, ll k)
{
  ll byPlus = abs(key-value);
  ll byMinus = 0;
  if(key > value){
    while(value != key){
      value--;
      byMinus++;
      if(value == 0)
        value = k;
    }
  }
  else{
    while(value != key){
      value++;
      byMinus++;
      if(value == k+1)
        value = 1;
    }
  }


  return min(byPlus,byMinus);
}

ll solve()
{
  ll n,k;
  cin >> n >> k;
  vector<ll> arr(n);

  for(int i=0;i<n;i++)
    cin >> arr[i];
    if(k == 2){
      ll cnt1 = 0;
      ll cnt2 = 0;
      for(int i=0;i<n;i++){
          if(arr[i] != k){
            cnt1++;
          }
          else
            cnt2++;
      }
      return min(cnt1,cnt2);
  }
  map<ll,vector<ll>> mp;

  for(int i=0;i<n;i++)
  {
    if(mp.find(arr[i]) == mp.end()){
    for(int j=0;j<n;j++)
    {
      if(i == j)
        continue;
      mp[arr[i]].push_back(minDiff(arr[i],arr[j],k));
    }
  }
  }

  if(mp.find(k) == mp.end()){
    for(int i=0;i<n;i++)
    {
      mp[k].push_back(minDiff(k,arr[i],k));
    }
}

//   for(auto i : mp){
//     cout << i.first << " : ";
//     for(auto j : i.second){
//       cout << j << " ";
//     }
//     cout << endl;
//   }

  ll mn = INT_MAX;
  for(auto i : mp){
    ll sum = 0;
    for(auto j : i.second){
      sum += j;
    }
    mn = min(mn,sum);
  }

  return mn;

}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       cout<<"Case #"<<i<<": "<<solve()<<endl;
   }
   return 0;
}


// Code By Jasmeet Singh
