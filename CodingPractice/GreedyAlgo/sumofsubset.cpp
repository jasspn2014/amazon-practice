//
// Created by jassp on 01-07-2020.
//

#include<iostream>
#include<vector>
#define lli long long int
#define li long int
#define uli unsigned long int
using namespace std;

bool isSumSubset(int arr[], int n, int sum)
{
    if(sum == 0)
        return true;

    if(n == 0)
        return false;

    if(arr[n-1] > sum)
        return isSumSubset(arr,n-1,sum);

    return isSumSubset(arr,n-1,sum-arr[n-1]) ||  isSumSubset(arr,n-1,sum);

}

char* decimalBase(int n, int num)
{
    vector<char> v;

    int k = 0;
    while(num > 0)
    {
        int d = num%n;
        if(d < 10)
        {
            v.push_back(d+48);
        }
        else
        {
            v.push_back(d+55);
        }

        num /= n;
    }

    int i=0;
    int j = v.size()-1;
    while(i<=j)
    {
        char temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    char *str = (char*)malloc(v.size()*sizeof(char));
    for(int i=0;i<v.size();i++)
        str[k++] = v[i];
    return str;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num = 712;
    int n = 12;

    cout<<decimalBase(n,num);

}
