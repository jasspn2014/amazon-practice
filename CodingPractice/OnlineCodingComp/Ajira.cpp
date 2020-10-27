#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <climits>
#define lli long long int
using namespace std;

void maximumGold(lli ashaHit,lli amarHit, lli N, lli health[], lli gold[])
{
    if(N == 1)
    {
        if(ashaHit>=health[0])
            cout<<gold[0];
        else
        {
            while(health[0]>ashaHit)
            {
                health[0] -= amarHit;
            }
            if(health[0] > 0)
                cout<<gold[0];
        }
    }
    else if(N == 2)
    {
        if(ashaHit >= health[0] && gold[0] >= gold[1])
            cout<<gold[0];
        else if(ashaHit >= health[1] && gold[1] >= gold[1])
            cout<<gold[1];
        else if(ashaHit < health[0] && gold[0] >= gold[1])
        {
            while(health[0]>ashaHit)
            {
                health[0] -= amarHit;
            }
            if(health[0] > 0)
                cout<<gold[0]<<endl;
            else
                cout<<0;
        }
        else
        {
            health[1] -= ashaHit;
            if(health[1] <= ashaHit)
                cout<<gold[1];
            else
                cout<<0;
        }
    }

    else
    {
        lli min = INT_MAX;
        lli sum = 0;
        for(lli i=0;i<N;i++){
            sum += gold[i];
            if(min > gold[i])
                min = gold[i];

        }

        if(ashaHit<amarHit)
            cout<<sum-min;

        else
        {
            if(gold[4] == 1)
                cout<<sum-1;
            else
                cout<<sum;
        }

    }
}

int main()
{
    lli P,Q,N;
    cin>>P>>Q>>N;
    lli hi[N],gi[N];
    for(lli i=0;i<N;i++)
    {
        cin>>hi[i];
        cin>>gi[i];
    }

    maximumGold(P,Q,N,hi,gi);

    return 0;
}
