#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Complete the largestPermutation function below.
vector<int> largestPermutation(int k, vector<int> arr) {
    for(int i=0;i<k;i++)
    {
        int mxIdx = i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[mxIdx] < arr[j])
                mxIdx = j;
        }

        swap(&arr[mxIdx],&arr[i]);
    }

    return arr;

}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    string str;
    getline(cin,str);
    for(int i=0;i<n;i++)
    {
        int item = stoi(str[i]);
        arr[i] = item;
    }

    arr = largestPermutation(k,arr);

    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}