#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

int dictionaryContains(string &word)
{
    string dictionary[] = {"mobile","samsung","sam","sung",
                           "man","mango", "icecream","and",
                           "go","i","love","ice","cream"};
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < n; i++)
        if (dictionary[i].compare(word) == 0)
            return true;
    return false;
}

void wordBreakUtil(string str,int n, string res);

//void wordBreak(string str)
//{
//    // last argument is prefix
//    wordBreakUtil(str, str.size(), "");
//}

void wordBreakUtil(string str,int n, string res)
{
    for(int i=1;i<=n;i++)
    {
        string prefix = str.substr(0 ,i);
        if(dictionaryContains(prefix))
        {
            if(i == n)
            {
                res += prefix;
                cout<<res<<endl;
                return;
            }
            wordBreakUtil(str.substr(i,n-i),n-i,(res + prefix + " "));
        }

    }

}


int main()
{
    string str  ="iloveicecreamandmango";
    //cin >> str;
    wordBreakUtil(str, str.size(), "");
    return 0;
}

// Code By Jasmeet Singh