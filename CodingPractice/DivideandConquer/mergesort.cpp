#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;

void merge(int arr[], int beg,int mid, int end)
{
    int n1 = mid-beg+1;
    int n2 = end-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
        L[i] = arr[i+beg];

    for(int i=0;i<n2;i++)
       R[i] = arr[mid+1+i];

    int i=0;
    int j=0;
    int k=beg;
    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            arr[k++] = L[i++];
        } else
        {
            arr[k++] = R[j++];
        }
    }

    while(i<n1)
    {
        arr[k++] = L[i++];
    }

    while(j<n2)
    {
        arr[k++] = R[j++];
    }

}


void mergesort(int arr[], int beg, int end)
{
    if(beg<end)
    {
        int mid = beg+(end-beg)/2;
        mergesort(arr, beg, mid);
        mergesort(arr, mid+1, end);
        merge(arr,beg,mid,end);
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15,92,22,10,120,33,1,81,19,23,5,177,42};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Merge Sort: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    mergesort(arr,0,n-1);
    cout<<"\nAfter Merge Sort: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}

// Code By Jasmeet Singh