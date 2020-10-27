//
// Created by jassp on 07-07-2020.
//

#include<iostream>
using namespace std;

int memo[100];

void initilize()
{
    for(int i=0;i<100;i++)
        memo[i] = -1;
}
int fibo(int n)
{
    if(memo[n] == -1)
    {
       if(n == 0 || n == 1)
           memo[n] = n;
       else
           memo[n] = memo[n-1] + memo[n-2];
    }

    return memo[n];

}

int main()
{
    int n;
    cin>>n;
    initilize();
    for(int i=0;i<n;i++)
        cout<<fibo(i)<<" ";

}

