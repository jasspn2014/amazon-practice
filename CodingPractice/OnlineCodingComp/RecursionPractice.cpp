#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;
//
//void insertEndStack(stack<int> &st,int temp)
//{
//    if(st.size() == 0) {
//        st.push(temp);
//        return;
//    }
//    int t = st.top();
//    st.pop();
//    insertEndStack(st,temp);
//    st.push(t);
//}
//void reverseStack(stack<int> &st)
//{
//    if(st.size() == 1)
//        return;
//
//    int temp = st.top();
//    st.pop();
//    reverseStack(st);
//    insertEndStack(st,temp);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    stack<int> st;
//    st.push(10);
//    st.push(20);
//    st.push(30);
//    st.push(40);
//    reverseStack(st);
//    while(!st.empty())
//    {
//        cout<<st.top()<<endl;
//        st.pop();
//    }
//
//    return 0;
//}
//
//// Code By Jasmeet Singh


// Tower of Hanoi
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(int n, int source, int destination, int helper)
//{
//    if(n == 1)
//    {
//        cout<<"Move "<<n<<" From "<<source<<" to "<<destination<<endl;
//        return;
//    }
//    solve(n-1,source,helper,destination);
//    cout<<"Move "<<n<<" From "<<source<<" to "<<destination<<endl;
//    solve(n-1,helper,destination,source);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n = 3;
//    int s = 1;
//    int h = 2;
//    int d = 3;
//    solve(n,s,d,h);
//    return 0;
//}
//
//// Code By Jasmeet Singh


//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void powerSet(string str,int idx, string op) {
//    if(idx == str.size())
//    {
//        cout<<op<<" ";
//        return;
//    }
//
//    powerSet(str,idx+1,op+str[idx]);
//    powerSet(str,idx+1,op);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string s = "abc";
//    powerSet(s,0,"");
//    return 0;
//}
//
//// Code By Jasmeet Singh


//
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#include<map>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//bool cmp(pair<char,int> a, pair<char,int> b)
//{
//    return a.second < b.second;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string str = "Hello World! How are you all?";
//    map<char,int> mp;
//    for(int i=0;i<str.size();i++)
//    {
//        if(isalnum(str[i])) {
//            if (mp.find(str[i]) == mp.end())
//                mp.insert(make_pair(str[i], 1));
//            else
//                mp[str[i]]++;
//        }
//    }
//
//    int mx = INT_MIN;
//    char ch;
//    for(auto it:mp){
//        if(it.second > mx)
//        {
//            mx = it.second;
//            ch = it.first;
//        }
//    }
//
//    for(auto it:mp){
//        cout<<it.first<<" "<<it.second<<endl;
//    }
//    cout<<ch;
//
//
//    return 0;
//}
//
//// Code By Jasmeet Singh

// Printing Power Set / Subset / Subsequences

//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void generateSubsequence(string str, string op)
//{
//    if(str.size() == 0) {
//        cout << op << " ";
//        return;
//    }
//    string op1 = op;
//    string op2 = op + str[0];
//    str.erase(str.begin());
//    generateSubsequence(str,op1);
//    generateSubsequence(str,op2);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string str = "ABC";
//    generateSubsequence(str,"");
//    return 0;
//}
//
//// Code By Jasmeet Singh

//// Printing Permutation with spaces
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(string str, string op)
//{
//    if(str.size() == 0){
//        cout<<op<<endl;
//        return;
//    }
//
//    string op1 = op + str[0];
//    string op2 = op+" "+str[0];
//    str.erase(str.begin());
//
//    solve(str,op1);
//    solve(str,op2);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string str = "ABC";
//    string op = "";
//    op += str[0];
//    str.erase(str.begin());
//    solve(str,op);
//    return 0;
//}
//
//// Code By Jasmeet Singh
//
//

//// Printing Permutations with Change Case
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(string str, string op)
//{
//    if(str.size() == 0)
//    {
//        cout<<op<<endl;
//        return;
//    }
//
//    string op1 = op + str[0];
//    string op2 = op + char(str[0]-32);
//
//    str.erase(str.begin());
//
//    solve(str,op1);
//    solve(str,op2);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string str = "abc";
//    solve(str,"");
//    return 0;
//}
//
//// Code By Jasmeet Singh


// Printing Permutation with Letter Case Change
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(string str, string op)
//{
//    if(str.size() == 0)
//    {
//        cout<<op<<endl;
//        return;
//    }
//
//
//
//    if(isdigit(str[0]))
//    {
//        string op1 = op + str[0];
//        str.erase(str.begin());
//        solve(str,op1);
//    }
//    else{
//        string op1 = op + char(tolower(str[0]));
//        string op2 = op + char(toupper(str[0]));
//        str.erase(str.begin());
//        solve(str,op1);
//        solve(str,op2);
//    }
//}
//
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string str = "a1B2";
//    solve(str,"");
//    return 0;
//}
//
//// Code By Jasmeet Singh
//
//
//
//

//// Generate Balanced Parantheses
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//
//void solve(int open, int close, string op)
//{
//    if(open == 0 && close == 0)
//    {
//        cout<<op<<endl;
//        return;
//    }
//
//    if(open != 0)
//    {
//        string op1 = op + '(';
//        solve(open-1,close,op1);
//    }
//
//    if(close > open)
//    {
//        string op1 = op + ')';
//        solve(open,close-1,op1);
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n = 3;
//    int open = 3;
//    int close = 3;
//    solve(open,close,"");
//    return 0;
//}
//
//// Code By Jasmeet Singh

// Print N-bit binary numbers having 1’s greater than or equal to 0’s in all prefixes
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(int ones, int zeros, string op, int n, vector<string> &res)
//{
//    if(n == 0)
//    {
//        res.push_back(op);
//        return;
//    }
//
//    string op1 = op + '1';
//    solve(ones + 1, zeros, op1, n - 1, res);
//
//    if(ones > zeros) {
//        string op2 = op + '0';
//        solve(ones, zeros + 1, op2, n - 1, res);
//    }
//
//}
//
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    vector<string> res;
//    int n = 4;
//    solve(0,0,"",n,res);
//    for(auto i : res)
//        cout<<i<<endl;
//    return 0;
//}
//
//// Code By Jasmeet Singh
//


//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//typedef struct chocolate{
//    int sweet;
//    int bitter;
//    char name;
//} chocolate;
//
//bool cmp(chocolate c1, chocolate c2)
//{
//    if(c1.sweet < c2.sweet)
//        return false;
//    else if(c1.sweet == c2.sweet)
//    {
//        if(c1.bitter > c2.bitter)
//            return false;
//        else if(c1.bitter == c2.bitter)
//        {
//            if(c1.name < c2.name)
//                return true;
//            else
//                return false;
//        }
//        else
//            return true;
//    }
//    else
//        return true;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int sweetness[] = {1,1,1,1,1,1};
//    int bitterness[] = {1,1,1,1,1,1};
//    char name[] = {'a','b','c','d','e','f'};
//    int n = sizeof(sweetness)/sizeof(sweetness[0]);
//    vector<chocolate> v(n);
//    for(int i=0;i<n;i++)
//    {
//        v[i].sweet = sweetness[i];
//        v[i].bitter = bitterness[i];
//        v[i].name = name[i];
//    }
//
//    sort(v.begin(),v.end(),cmp);
//
//    int queries[] = {3,5,1,2,6,4};
//    int q = sizeof(queries)/sizeof(queries[0]);
//
//    for(int i=0;i<q;i++)
//    {
//        cout<<v[queries[i]-1].name<<" ";
//    }
//
//
//    return 0;
//}

// Code By Jasmeet Singh



//
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//bool cmp(int a, int b)
//{
//    if(a<b)
//        return true;
//    else
//        return false;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n = 5;
//    vector<char> v(n);
//    for(int i=0;i<n;i++)
//        cin>>v[i];
//
//    for(int i=0;i<n;i++)
//        cout<<v[i]<<" ";
//
//    cout<<endl;
//    sort(v.begin(),v.end(),cmp);
//
//    for(int i=0;i<n;i++)
//        cout<<v[i]<<" ";
//
//
//
//    return 0;
//}
//
//// Code By Jasmeet Singh
//
//
//

//#include<iostream>
//using namespace std;
//class Base
//{
//    int a;
//public:
//    Base()
//    {
//        a = 10;
//    }
//    virtual void print() = 0;
//
//};
//
//
//
//class Derived : public Base{
//public:
//    void print()
//    {
//        cout<<"Dervied Class";
//    }
//};
//
//void whoisthis(Base *obj)
//{
//    obj->print();
//}
//
////int main()
////{
////    Derived d;
////    d.print();
////}
//
//
//class Flower{
//public:
//    void print()
//    {
//        cout<<"I am a Flower";
//    }
//};
//
//class Rose : virtual public Flower{
//public:
//
//};
//
//class SunFlower : virtual public Flower{
//public:
//
//};
//
//class SunRose : public SunFlower,  public Rose
//{
//public:
//
//};
//
//int main()
//{
//    SunRose sr;
//    sr.print();
//}


//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void solve(vector<int> &arr,int idx, vector<int> &op,int n, int r)
//{
//    if(r == 0)
//    {
//        for(int i=0;i<op.size();i++)
//        {
//            cout<<op[i]<<" ";
//        }
//        cout<<endl;
//        return;
//    }
//    if(idx == n && r != 0)
//        return;
//
//    int x = arr[idx];
//    vector<int> op1(op);
//    vector<int> op2(op);
//
//    op1.push_back(x);
//    solve(arr,idx+1,op1,n,r-1);
//    solve(arr,idx+1,op2,n,r);
//
//}
//
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n;
//    cin>>n;
//    vector<int> arr(n);
//
//    for(int i=0;i<n;i++)
//    {
//        arr[i] = i+1;
//    }
//
////    for(int i=0;i<n-1;i++)
////    {
////        for(int j = i+1;j<n;j++)
////        {
////            cout<<'{'<<arr[i]<<','<<arr[j]<<'}'<<endl;
////        }
////    }
//    int r;
//    cin>>r;
//    vector<int> op;
//    solve(arr,0,op,n,r);
//
//    return 0;
//}
//
//// Code By Jasmeet Singh


//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<cstring>
//#include<climits>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//void insert(stack<int> &st, int val)
//{
//    if(st.size() == 0){
//        st.push(val);
//        return;
//    }
//
//    int t = st.top();
//    st.pop();
//    insert(st,val);
//    st.push(t);
//}
//void reverseStack(stack<int> &st)
//{
//    if(st.size() == 1)
//    {
//        return;
//    }
//    int temp = st.top();
//    st.pop();
//    reverseStack(st);
//    insert(st,temp);
//}
//
//void insert1(stack<int> &st,int val)
//{
//    if(st.empty())
//    {
//        st.push(val);
//        return;
//    }
//    if(st.top() > val){
//        st.push(val);
//        return;
//    }
//
//    int t = st.top();
//    st.pop();
//    insert1(st,val);
//    st.push(t);
//
//
//}
//
//void sortStack(stack<int> &st)
//{
//    if(st.size() == 0)
//        return;
//
//    int temp = st.top();
//    st.pop();
//    sortStack(st);
//    insert1(st,temp);
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    stack<int> st;
//    st.push(15);
//    st.push(2);
//    st.push(33);
//    st.push(41);
//    st.push(37);
//
//    //reverseStack(st);
//    sortStack(st);
//    while(!st.empty())
//    {
//        cout<<st.top()<<endl;
//        st.pop();
//    }
//    return 0;
//}
//
//// Code By Jasmeet Singh
//


/*


vector<int> sieveOfEratosthenes(int n)
{
    vector<bool> Prime(n+1);
    vector<int> spfs(n+1);

    for(int i=0;i<=n;i++)
        if(i%2 == 0)
            spfs[i] = 2;
        else
            spfs[i] = 0;

    for(int i=3;i<=n;i=i+2)
    {
        if(Prime[i] == true)
            continue;
        spfs[i] = i;
        int j = i;
        while(i*j <= n)
        {
            if(Prime[i*j] == false) {
                Prime[i * j] = true;
                spfs[i * j] = i;
            }
            j += 2;
        }
    }
    return spfs;
}

int sumFactors(vector<int> spfs, int n)
{
    int x = n;
    int curr = spfs[n];
    int countPrime = 1;
    int sum = 1;
    int power = 1;
    while(n > 1)
    {
        while(n % curr == 0)
        {
            n /= curr;
            countPrime += 1;
            power *= curr;
        }
        power *= curr;
        sum *= (power - 1)/(curr - 1);
        curr = spfs[n];
        countPrime = 1;
        power = 1;
    }


    return sum-x;
}

int sumPlentifulNumbers(int n)
{
    vector<int> spfs = sieveOfEratosthenes(n);
    int sum = 0;
    for(int i=2;i<=n;i++)
    {
        if(sumFactors(spfs,i) > i)
            sum += i;
    }

    return sum;
}

bool isPowerof2(int n)
{
    if(n == 1)
        return true;

    while(n != 0)
    {
        if(n == 1)
            return true;
        if(n % 4 != 0 || n < 4)
            return false;

        n /= 4;
    }

    return true;
}
*/

//int main()
//{
////    ios::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    int n;
////    cin>>n;
////    cout<<sumPlentifulNumbers(n);
////    return 0;
////
//
//    int n = 32;
//
//    if(isPowerof2(n))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//
//}
//
//// Code By Jasmeet Singh









//#include<bits/stdc++.h>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//#define MAX 10000000
//using namespace std;
//
//
//void sieveofEratothenes(lli n, vector<lli> &spf)
//{
//    vector<bool> Prime(n+1,false);
//    for(int i=0;i<=n;i=i+2)
//        spf[i] = 2;
//
//    for(int i=3;i<=n;i++)
//    {
//        if(Prime[i])
//            continue;
//        spf[i] = i;
//        for(lli j = i;i*j <= n;j=j+2)
//        {
//            if(Prime[i*j] == false)
//            {
//                Prime[i*j] = true;
//                spf[i*j] = i;
//            }
//        }
//    }
//}
//
//lli totalnumbersoffactors(vector<lli> &spf,lli n)
//{
//    lli sum = 1;
//    lli curr = spf[n];
//    lli count = 0;
//    while(n > 1)
//    {
//        while(n%curr == 0)
//        {
//            n /= curr;
//            count++;
//        }
//
//        sum *= (count+1);
//        curr = spf[n];
//        count = 0;
//    }
//
//    return sum;
//}
//
//int main()
//{
//    li t;
//    cin>>t;
//    lli n;
//
//    vector<lli> spf(MAX+5);
//    sieveofEratothenes(MAX+5,spf);
//    vector<lli> factors(MAX+5);
//
//    factors[0] = 0;
//    factors[1] = 1;
//
//    for(lli i = 2;i<MAX;i++)
//            factors[i] = factors[i-1] + totalnumbersoffactors(spf,i);
//
//    while(t--)
//    {
//        cin>>n;
//        cout<<(lower_bound(factors.begin(),factors.end(),n)-factors.begin())<<endl;
//
//    }
//}

//
//#include<bits/stdc++.h>
//using namespace std;

//bool checkVowel(char c)
//{
//    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//}
//int maxVowels(string s, int k) {
//    int n = s.size();
//    vector<int> res;
//
//    int i=0;
//    int cnt = 0;
//    for(;i<k;i++)
//    {
//        if(checkVowel(s[i]))
//            cnt++;
//    }
//
//    res.push_back(cnt);
//
//    for(;i<n;i++)
//    {
//        int x = res[res.size()-1];
//        if(checkVowel(s[i-k]))
//            x--;
//        if(checkVowel(s[i]))
//            x++;
//        res.push_back(x);
//    }
//
//    int mx = INT_MIN;
//    for(int i=0;i<res.size();i++)
//        mx = max(mx,res[i]);
//
//    return mx;
//}
//int main()
//{
//    string str = "abciidef";
//    cout<<maxVowels(str,3);
//}

//class Base{
//
//public:
//    int x;
//    Base()
//    {
//        cout<<"Default Constructor from Base"<<endl;
//    }
//    Base(int a)
//    {
//        x = a;
//        cout<<"Parameterized Constructor from Base"<<endl;
//    }
//};
//
//
//class Derived : public Base
//{
//public:
//    Derived()
//    {
//        cout<<"Default Constructor from Derived"<<endl;
//    }
//    Derived(int a) : Base(a)
//    {
//        x = a;
//        cout<<"Parametrized Constructor from Derived"<<endl;
//    }
//};
//
//int main()
//{
//    Derived d(10);
//}
//
//
//


int printSaddlePoint(int n, int m, int arr[][3])
{
    int res = -1;
   for(int i=0;i<n;i++)
   {
       int mx = INT_MIN;
       int row;
       for(int j=0;j<n;j++)
       {
           if(mx < arr[j][i])
           {
               mx = arr[j][i];
               row = j;
           }
       }
       int mn = INT_MAX;
       for(int j=0;j<n;j++)
       {
            mn = min(arr[row][j],mn);
       }
       if(mn == mx){
           res = mx;
       }
   }
   return res;
}

//int decimalToOctal(int n)
//{
//   string res = "";
//
//   while(n != 0)
//   {
//       res = res*10 + (n%8);
//       n /= 8;
//   }
//
//   //string s = to_string(res);
//   reverse(res.begin(),res.end());
//   return res;
//}
//
//int main()
//{
////    int arr[][3] = {{1,2,3},
////                    {4,5,6},
////                    {10,18,4}};
////    cout<<printSaddlePoint(3,3,arr);
//    int n = 33;
//    cout<<decimalToOctal(n);
//}


typedef struct tree{
    struct tree *left;
    int data;
    struct tree *right;

    tree(int d)
    {
        left = NULL;
        data = d;
        right = NULL;
    }
}TreeNode;

TreeNode* insertBST(TreeNode *root, int data)
{
    if(root == NULL)
        return new TreeNode(data);
    else{
        if(root->data < data)
            root->right = insertBST(root->right,data);
        else
            root->left = insertBST(root->left, data);
    }
}

void inorder(TreeNode *root)
{
    stack<TreeNode*> st;
    TreeNode *curr = root;

    while(curr != NULL || !st.empty())
    {
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";

        curr = curr->right;
    }
}

void preorder1(TreeNode *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder1(root->left);
        preorder1(root->right);
    }
}
void preorder(TreeNode *root)
{
    TreeNode *curr = root;
    stack<TreeNode*> st;

    while(curr != NULL || !st.empty())
    {
        if(curr != NULL){
            cout<<curr->data<<" ";
            st.push(curr->right);
            st.push(curr->left);
        }

        curr = st.top();
        st.pop();
    }
}

//int main()
//{
////    int arr[] = {42,30,60,15,90,82,44,63,29,10};
////    int n = sizeof(arr)/sizeof(arr[0]);
////    TreeNode *root = NULL;
////
////    for(int i=0;i<n;i++)
////        root = insertBST(root, arr[i]);
////
////    inorder(root);
////    cout<<endl;
////    preorder1(root);
////    cout<<endl;
////    preorder(root);
//
//
//}


class Base
{
    int a;
public:
    virtual void introduce()
    {
        cout<<"Hello I am Base Class"<<endl;
        a = 10;
    }
};

class Derived : public Base
{
public:
    void introduce()
    {
        cout<<"Hello I am Dervied Class";
    }
};

class Derived2 : public Base
{
public:
    void introduce()
    {
        cout<<"Hello I am Dervied2 Class";
    }
};
class Derived3 : public Base
{
public:

};

void whoisThis(Base *d)
{
    d->introduce();
}

int main()
{
    Derived d;
    Derived2 d2;
    whoisThis(new Derived3);
}