
//#include<iostream>
//using namespace std;
//
//void solve()
//{
//    int arr[5],p;
//    for(int i=0;i<5;i++){
//        cin>>arr[i];
//    }
//    cin>>p;
//    arr[0] *= p;
//    for(int i=0;i<4;i++)
//    {
//        if(arr[i]>24)
//            arr[i+1] = (arr[i+1]*p) + (arr[i] - 24);
//    }
//    if(arr[3]+arr[4] <= 24)
//        cout<<"No"<<endl;
//    else
//        cout<<"Yes"<<endl;
//}
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}

//#include <iostream>
//#define MAX 100000
//using namespace std;
//
//void solve()
//{
//    string str;
//    cin>>str;
//    int i=0;
//    string ls="",rs="";
//    if(str.length()%2==0)
//    {
//        while(i<str.length())
//        {
//            if(i<str.length()/2)
//                ls += str[i];
//            else
//                rs += str[i];
//
//            i++;
//        }
//    }
//    else{
//        while(i<str.length())
//        {
//            if(i<(int)str.length()/2)
//                ls += str[i];
//
//            if(i>(int)str.length()/2)
//                rs += str[i];
//
//            i++;
//        }
//
//    }
//    bool isLapin = true;
//    int arr[26] = { 0 };
//    for(i=0;i<ls.length();i++)
//    {
//        arr[ls[i]-97]++;
//        arr[rs[i]-97]++;
//    }
//
//    for(i=0;i<26;i++)
//    {
//        if(arr[i]%2 != 0)
//        {
//            isLapin = false;
//            break;
//        }
//    }
//
//    if(isLapin)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//string kangaroo(int x1, int v1, int x2, int v2) {
//    int count1 = 0, count2 = 0;
//    if(x2>x1 && v2>v1)
//        return "NO";
//    if(x1>x2 && v1>v2)
//        return "NO";
//    int i=1,x = x1,y = x2;
//    while(x != y && i < 10000)
//    {
//        x = x+v1;
//        y = y+v2;
//        count1++;
//        count2++;
//        i++;
//    }
//
//
//    if(count1 == count2)
//        return "YES";
//    else
//        return "NO";
//
//}
//
//int main()
//{
//    int x1,v1,x2,v2;
//    cin>>x1>>v1>>x2>>v2;
//    cout<<"Result: "<<kangaroo(x1,v1,x2,v2);
//



/* in Chefland, there is a very famous street where N types of street food (numbered 1 through N) are offered. For each valid i, there are Si stores that offer food of the i-th type, the price of one piece of food of this type is Vi (the same in each of these stores) and each day, Pi people come to buy it; each of these people wants to buy one piece of food of the i-th type.

Chef is planning to open a new store at this street, where he would offer food of one of these N types. Chef assumes that the people who want to buy the type of food he'd offer will split equally among all stores that offer it, and if this is impossible, i.e. the number of these people p is not divisible by the number of these stores s, then only ⌊ps⌋ people will buy food from Chef.

Chef wants to maximise his daily profit. Help Chef choose which type of food to offer and find the maximum daily profit he can make.

Input
        The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains three space-separated integers Si, Pi and Vi.
Output
        For each test case, print a single line containing one integer ― the maximum profit.

Constraints
1≤T≤100
1≤N≤100
1≤Si,Vi,Pi≤10,000 for each valid i
        Subtasks
Subtask #1 (100 points): original constraints

Example Input
2
3
4 6 8
2 6 6
1 4 3
1
7 7 4
Example Output
12
0
Explanation
        Example case 1: Chef should offer food of the second type. On each day, two people would buy from him, so his daily profit would be 12.

Example case 2: Chef has no option other than to offer the only type of food, but he does not expect anyone to buy from him anyway, so his daily profit is  0

 */

 #include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int s[n], v[n], p[n];

    for(int i = 0;i < n; i++)
    {
        cin>>s[i];
        cin>>p[i];
        cin>>v[i];
    }
    int profit = 0,currProfit = 0;
    for(int i = 0;i < n; i++) {
        if (p[i] % s[i] != 0) {
            currProfit = ((float)p[i] / s[i]) * v[i];
            if (currProfit > profit)
                profit = currProfit;
        }
    }
    cout<<profit<<endl;

    }




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
}

// Code By Jasmeet Singh