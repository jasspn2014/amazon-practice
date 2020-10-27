#include<iostream>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int *arr, int beg, int end)
{
    int pivot = arr[end];

    int i = beg-1;
    for(int j = beg;j<=end-1;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[end]);
    return (i+1);
}

void quicksort(int *arr, int beg, int end)
{
    if(beg<end)
    {
        int pi = partition(arr, beg, end);
        quicksort(arr,beg,pi-1);
        quicksort(arr,pi+1,end);
    }
}

int main()
{
    int arr[] = {10,135,19,2,9,55,45,24};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    quicksort(arr,0,n-1);

    cout<<"\nAfter Sorting: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
