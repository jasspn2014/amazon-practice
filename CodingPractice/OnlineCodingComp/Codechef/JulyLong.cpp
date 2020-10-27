// Ques 1:
//#include<iostream>
//#define lli long long int
//using namespace std;
//
//void solve()
//{
//    int n;
//    cin>>n;
//    lli arr[n];
//    for(int i = 0;i<n;i++)
//        cin>>arr[i];
//    lli count = 0;
//    for(int i=1;i<n;i++)
//    {
//        count += abs((arr[i]-arr[i-1]))-1;
//    }
//
//    cout<<count<<endl;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//
//    return 0;
//    // Code By Jasmeet Singh (jasspn2014)
//}


//Ques 2:
//#include<iostream>
//#define lli long long int
//using namespace std;
//
//lli digsum(ulli n)
//{
//    lli sum = 0;
//    while(n>0)
//    {
//        sum += n%10;
//        n /= 10;
//    }
//}
//
//void solve()
//{
//    int n;
//    cin>>n;
//    int chef = 0,morty = 0;
//    while(n--)
//    {
//        lli c,m;
//        cin>>c>>m;
//        c = digsum(c);
//        m = digsum(m);
//        if(c>m)
//            chef++;
//        else if(m>c)
//            morty++;
//        else
//        {
//            chef++;
//            morty++;
//        }
//
//    }
//
//    if(chef > morty)
//        cout<<0<<" "<<chef;
//    else if(morty>chef)
//        cout<<1<<" "<<morty;
//    else
//        cout<<"2"<<" "<<chef;
//}
//
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//        cout<<endl;
//    }
//
//    return 0;
//    // Code By Jasmeet Singh (jasspn2014)
//
//}

#include<iostream>
#include<stack>

using namespace std;
string isBalanced(string s) {
    stack<char> st;
    int i = 0;
    while(i < s.size())
    {
        if(s[i] == '[' || s[i] == '{' || s[i] == '(')
            st.push(s[i]);
        else
        {
            if(s[i] == ')' && st.top() == '(')
                st.pop();
            else if(s[i] == '}' && st.top() == '{')
                st.pop();
            else if(s[i] == ']' && st.top() == '[')
                st.pop();
            else
                break;

        }
        cout<<st.top()<<endl;
        i++;
    }
    if(st.empty())
        return "YES";
    else
        return "NO";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin>>s;

    cout<<isBalanced(s);


    return 0;
    // Code By Jasmeet Singh (jasspn2014)

}