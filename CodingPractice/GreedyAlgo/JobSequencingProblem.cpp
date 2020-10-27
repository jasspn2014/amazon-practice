//#include<iostream>
//#include<stack>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#define ulli unsigned long long int
//#define lli long long int
//#define li long int
//using namespace std;
//
//
//struct Job
//{
//    char job_id;
//    int deadline;
//    int profit;
//};
//typedef struct Job Job;
//
//bool cmp(Job a, Job b)
//{
//    if(a.profit > b.profit)
//        return true;
//    else
//        return false;
//}
//
//void JobSequence(Job arr[], int n)
//{
//    sort(arr,arr+n,cmp);
//    int result[n];
//    vector<bool> slot(n,false);
//
//    for(int i=0;i<n;i++)
//    {
//        for(int j = min(n,arr[i].deadline)-1;j>=0;j--)
//        {
//            if(slot[j] == false)
//            {
//                result[j] = i;
//                slot[j] = true;
//                break;
//            }
//        }
//    }
//
//    for(int i=0;i<n;i++)
//        if(slot[i])
//            cout<<arr[result[i]].job_id<<" ";
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
//                  {'d', 1, 25}, {'e', 3, 15}};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    cout << "Following is maximum profit sequence of jobs are: "<<endl;
//    JobSequence(arr, n);
//    return 0;
//}
//
//
//// Code By Jasmeet Singh






#include<iostream>
#include<stack>
#include<vector>
#include<queue>
#include<algorithm>
#define ulli unsigned long long int
#define lli long long int
#define li long int
using namespace std;
const int N = 4;

void printSnakePattern(int arr[N][N])
{
    for(int i=0;i<N;i++)
    {
        if(i%2 == 0)
        {
            for(int j=0;j<N;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        } else
        {
            for(int j=N-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

void printMatrix(int arr[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposeMatrix(int arr[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void rotateMatrix(int arr[N][N])
{
    transposeMatrix(arr);
    int i1=0,i2 = N-1;
    while(i1 != i2){
        for(int j=0;j<N;j++)
        {
            int temp = arr[i1][j];
            arr[i1][j] = arr[i2][j];
            arr[i2][j] = temp;

        }
    i1++;
    i2--;
    }
}

void findElementinSortedMatrix(int mat[N][N],int x)
{
    int i=0,j=N-1;
    while(i >=0 && i<N && j>=0 && j<N)
    {
        if(mat[i][j] < x)
            i++;
        else if(mat[i][j] > x)
            j--;

        if(mat[i][j] == x){
            break;
        }
    }
    if(mat[i][j] == x)
        cout<<i<<","<<j;
    else
        cout<<-1;
}


void printBoundryElements(int matrix[][4], int R, int C)
{
    if(R == 1)
    {
        for(int i=0;i<C;i++)
            cout<<matrix[0][i]<<" ";
    }
    else if(C == 1)
    {
        for(int i=0;i<R;i++)
            cout<<matrix[i][0]<<" ";
    }
    else
    {
        for(int i=0;i<C;i++)
            cout<<matrix[0][i]<<" ";
        for(int i=1;i<R;i++)
            cout<<matrix[i][C-1]<<" ";
        for(int i=C-2;i>=0;i--)
            cout<<matrix[R-1][i]<<" ";
        for(int i=R-2;i>=1;i--)
            cout<<matrix[i][0]<<" ";
    }
}

void SpiralOrderTraversal(int mat[3][3],int R,int C)
{
    int top = 0, left = 0, bottom = R-1, right = C-1;
    while(top <= bottom && left <= right)
    {
        for(int i=0;i<=right;i++)
            cout<<mat[top][i]<<" ";

        top++;

        for(int i=top;i<=bottom;i++)
            cout<<mat[i][right]<<" ";

        right--;

        if(top <= bottom)
        {
            for(int i=right;i>=left;i--)
                cout<<mat[bottom][i]<<" ";
            bottom--;
        }

        if(left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    int arr[N][N] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

//    cout<<"Matrix is: "<<endl;
//    printMatrix(arr);
//    cout<<endl;

//    cout<<"Matrix After Transpose is: "<<endl;
//    printMatrix(arr);
//    cout<<endl;

//    cout<<"Matrix in Snake Pattern: "<<endl;
//    printSnakePattern(arr);
//    cout<<endl;

//    cout<<"Rotation of Matrix 90 Degree Counter Clock Wise: "<<endl;
//    rotateMatrix(arr);
//    printMatrix(arr);
//    cout<<endl;


//    int sortedMatrix[N][N] = {{10,20,30},
//                              {15,25,80},
//                              {35,90,100}};
//
//    int x = 10;
//    findElementinSortedMatrix(sortedMatrix,x);


    int matrix[][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};


    //printBoundryElements(arr,3,3);
    SpiralOrderTraversal(matrix,3,3);
    return 0;
}

// Code By Jasmeet Singh