#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<cstring>
#include<climits>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

void merge(int *arr,int beg, int mid, int end)
{
    int n1 = mid-beg+1;
    int n2 = end-mid;
    int L[mid-beg+1];
    int R[end-mid];

    for(int i=0;i < n1;i++)
        L[i] = arr[beg + i];

    for(int i=0;i<n2;i++)
        R[i] = arr[mid+1+i];

    int i = 0,j=0;
    int k = beg;
    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }


    while(j != n2)
    {
        arr[k++] = R[j++];
    }


    while(i != n1)
    {
        arr[k++] = L[i++];
    }
}

void mergeSort(int *arr, int beg,int end)
{
    if(beg < end)
    {
        int mid = beg + (end-beg)/2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15,19,2,10,66,92,7,45,13,22};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

// Code By Jasmeet Singh
