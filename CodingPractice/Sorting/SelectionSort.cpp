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

void SelectionSort(int *arr, int n)
{
   for(int i=0;i<n-1;i++)
   {
       int mnIdx = i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j] < arr[mnIdx])
               mnIdx = j;
       }
       swap(arr[i],arr[mnIdx]);
   }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[] = {15,9,18,2,2,2,2,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    printArr(arr,n); cout<<endl;
    SelectionSort(arr,n);
    cout<<"Sorted Array: ";
    printArr(arr,n); cout<<endl;
    return 0;
}

// Code By Jasmeet Singh


