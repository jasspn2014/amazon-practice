#include<bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

void printArr(int *arr, int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void Merge(int *arr, int beg, int mid , int end)
{
    int n1,n2;
    n1 = mid-beg+1;
    n2 = end-mid;

    int L[n1];
    int R[n2];
    int idx = beg;
    for(int i=0;i<n1;i++)
        L[i] = arr[idx++];

    for(int i=0;i<n2;i++)
        R[i] = arr[idx++];

    cout<<"L1: ";
    printArr(L,n1);
    cout<<endl;

    cout<<"L2: ";
    printArr(R,n2);
    cout<<endl;

    int i = 0;
    int j = 0;
    idx = beg;
    while(i<n1 && j < n2)
    {
        if(L[i] < R[j])
            arr[idx++] = L[i++];
        else
            arr[idx++] = R[j++];
    }

    while(i<n1)
    {
        arr[idx++] = L[i++];
    }

    while(j < n2)
        arr[idx++] = R[j++];

    cout<<"Arr: ";
    printArr(arr,end);
    cout<<endl;

}

void MergeSort(int *arr, int beg, int end)
{
   if(beg < end)
   {
       int mid = beg + (end-beg)/2;

       MergeSort(arr,beg,mid);
       MergeSort(arr,mid+1,end);
       Merge(arr,beg,mid,end);
   }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15,9,18,2,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    printArr(arr,n); cout<<endl;
    MergeSort(arr,0,n-1);
    cout<<"Sorted Array: ";
    printArr(arr,n); cout<<endl;
    return 0;
}

// Code By Jasmeet Singh


