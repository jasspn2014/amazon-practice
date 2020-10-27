////
//// Created by jassp on 09-06-2020.
////
//
#include<bits/stdc++.h>
using namespace std;

//
//// Linear Search
//
//int linearSearch(int *arr, int n, int key)
//{
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i] == key)
//            return i;
//    }
//
//    return -1;
//}
//
////// Binary Search Iterative Solution
//int binarySearch(int *arr, int key, int beg, int end)
//{
//    int mid = (beg+end)/2;
//    while(beg<end && arr[mid]!=key)
//    {
//        if(arr[mid]>key)
//            end = mid-1;
//        else
//            beg = mid+1;
//
//        mid = (beg+end)/2;
//    }
//    if(arr[mid] == key)
//        return mid;
//
//    return -1;
//
//}
//
//int binarySearchRecursive(int *arr, int key, int beg, int end)
//{
//    int mid = (beg+end)/2;
//
//    if(arr[mid] == key)
//        return mid;
//
//    if(beg>=end)
//        return -1;
//
//    if(arr[mid]>key)
//        return binarySearchRecursive(arr,key,beg,mid-1);
//    else
//        return binarySearchRecursive(arr,key,mid+1,end);
//}
//
//
//// Insertion Sort
//void insertionSort(int *arr, int n)
//{
//    int i,key,j;
//    for(i = 1;i<n;i++)
//    {
//        key = arr[i];
//        j = i - 1;
//
//        while(j>=0 && arr[j]>key)
//        {
//            arr[j+1] = arr[j];
//            j = j-1;
//        }
//
//        arr[j+1] = key;
//    }
//}
//
//// Selection Sort
//void selectionSort(int *arr, int n)
//{
//    for(int i=0;i<n-1;i++)
//    {
//        int min_idx = i;
//        for(int j=i+1;j<n;j++)
//        {
//            if(arr[j]<arr[min_idx])
//                min_idx = j;
//        }
//
//        int temp = arr[i];
//        arr[i] = arr[min_idx];
//        arr[min_idx] = temp;
//    }
//}
//
//
////Linear Search
//
////int main()
////{
////    int n;
////    cout<<"Enter Number of Elements: ";
////    cin>>n;
////    int *arr = (int *)malloc(n*sizeof(int));
////    int i,key;
////    cout<<"Enter Array Elements: ";
////    for(i=0;i<n;i++)
////        cin>>arr[i];
////
////    cout<<"Enter Number to be Searched: ";
////    cin>>key;
////    int res = linearSearch(arr,n,key);
////    if(res !=- 1)
////        cout<<"Element Found at Location "<<res<<endl;
////    else
////        cout<<"Element Not Found";
////
////    free(arr);
////    return 0;
////}
//
////// Binary Search
////int main()
////{
////    int n;
////    cout<<"Enter Number of Elements: ";
////    cin>>n;
////    int *arr = (int *)malloc(n*sizeof(int));
////    int i,key;
////    cout<<"Enter Array Elements: ";
////    for(i=0;i<n;i++)
////        cin>>arr[i];
////
////    cout<<"Enter Number to be Searched: ";
////    cin>>key;
////    int res = binarySearchRecursive(arr,key,0,n-1);
////    if(res!=-1)
////        cout<<"Element Found at Location "<<res<<endl;
////    else
////        cout<<"Element Not Found";
////    return 0;
////}
//
////
////// Insertion Sort
////int main()
////{
////    int n;
////    cout<<"Enter Number of Elements: ";
////    cin>>n;
////    int *arr = (int *)malloc(n*sizeof(int));
////    int i,key;
////    cout<<"Enter Array Elements: ";
////    for(i=0;i<n;i++)
////        cin>>arr[i];
////
////
////    for(i=0;i<n;i++)
////        cout<<arr[i]<<" ";
////    insertionSort(arr, n);
////    cout<<endl;
////    for(i=0;i<n;i++)
////        cout<<arr[i]<<" ";
////    return 0;
////}
//
//
//////Selection Sort
////int main()
////{
////    int n;
////    cout<<"Enter Number of Elements: ";
////    cin>>n;
////    int *arr = (int *)malloc(n*sizeof(int));
////    int i,key;
////    cout<<"Enter Array Elements: ";
////    for(i=0;i<n;i++)
////        cin>>arr[i];
////
////
////    for(i=0;i<n;i++)
////        cout<<arr[i]<<" ";
////
////    selectionSort(arr, n);
////
////    cout<<endl;
////    for(i=0;i<n;i++)
////        cout<<arr[i]<<" ";
////    return 0;
////}
//
//
//
//
//// Merge Two Sorted Array
//
//int main()
//{
//    int arr1[] = {1,3,5,7};
//    int arr2[] = {2,4,6,8,15,25,30};
//    int n1,n2,n3;
//    n1 = sizeof(arr1)/sizeof(arr1[0]);
//    n2 = sizeof(arr2)/sizeof(arr2[0]);
//    n3 = n1+n2;
//    int arr3[n3];
//
//    int idxOne = 0, idxTwo = 0, index = 0;
//
//    while(idxOne<n1 && idxTwo<n2)
//    {
//        if(arr1[idxOne]<=arr2[idxTwo])
//        {
//            arr3[index] = arr1[idxOne];
//            idxOne++;
//        }
//        else
//        {
//            arr3[index] = arr2[idxTwo];
//            idxTwo++;
//        }
//
//        index++;
//    }
//
//    if(idxOne == n1)
//    {
//        while(idxTwo<n2)
//        {
//            arr3[index] = arr2[idxTwo];
//            idxTwo++;
//            index++;
//        }
//    }
//
//    if(idxTwo == n2)
//    {
//        while(idxOne<n1)
//        {
//            arr3[index] = arr1[idxOne];
//            idxOne++;
//            index++;
//        }
//    }
//
//    cout<<"\nArary 3 is: "<<endl;
//    for(int i=0;i<n3;i++)
//    {
//        cout<<arr3[i]<<" ";
//    }
//
//}
//
//
//// Enter a Element at Location in Array
//
//int main()
//{
//    int arr[100];
//    int n;
//    cout<<"Enter Number of Elements:";
//    cin>>n;
//    cout<<"Enter Array Elements: ";
//    for(int i=0;i<n;i++)
//        cin>>arr[i];
//
//    cout<<"Array is: ";
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<"\nDo You want to Insert any Element\n1 To Insert\n0 To Exit";
//    int choice;
//    cin>>choice;
//    if(choice == 1){
//        int loc,val;
//
//        cout<<"\nEnter Location (i.e. Index) where you want to enter the value: ";
//        cin>>loc;
//
//        cout<<"\nEnter Value that you want to insert:";
//        cin>>val;
//
//        for(int i=n-1;i>=loc;i--)
//        {
//            arr[i+1] = arr[i];
//        }
//
//        arr[loc] = val;
//
//        cout<<"\nArray is: ";
//        for(int i=0;i<n+1;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        }
//
//    cout<<"\n Thank You";
//}
//
//
//
//// Delete a Element at Location in Array
//
//int main()
//{
//    int arr[100];
//    int n;
//    cout<<"Enter Number of Elements:";
//    cin>>n;
//    cout<<"Enter Array Elements: ";
//    for(int i=0;i<n;i++)
//        cin>>arr[i];
//
//    cout<<"Array is: ";
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<"\nDo You want to Delete any Element\n1 To Delete\n0 To Exit";
//    int choice;
//    cin>>choice;
//    if(choice == 1){
//        int loc;
//
//        cout<<"\nEnter Location (i.e. Index) You want to delete ";
//        cin>>loc;
//
//        for(int i=loc;i<n;i++)
//        {
//            arr[i] = arr[i+1];
//        }
//
//        cout<<"\nArray is: ";
//        for(int i=0;i<n-1;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//    }
//
//    cout<<"\n Thank You";
//}



int main()
{
    int r = 3,c = 3;
    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i=0; i<r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    int k = 1;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            arr[i][j] = k;
            k++;
        }

    for(int i=0;i<r;i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}