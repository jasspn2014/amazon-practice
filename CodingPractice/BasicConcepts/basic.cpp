// // #include<stdio.h>
// //
// // int main()
// // {
// //   int n,i,j;
// //   n = 5;
// //   for(i=1;i<=2*n;i++)
// //   {
// //     if(i<=n)
// //     {
// //       for(j=1;j<=i;j++)
// //       {
// //         printf("*");
// //       }
// //       printf("\n");
// //     }
// //     else
// //     {
// //       for(j=1;j<=2*n-i;j++)
// //       {
// //         printf("*");
// //       }
// //       printf("\n");
// //     }
// //   }
// // }
//
//
// #include<stdio.h>
// int main()
// {
//   int arr[3][3],i,j,n=3;
//   for(i=0;i<n;i++)
//   {
//     for(j=0;j<n;j++)
//     {
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//   for(i=0;i<n;i++)
//   {
//     for(j=0;j<n;j++)
//     {
//       if(i==j || j==n-1-i)
//         printf("%d ",arr[i][j]);
//       else
//         printf("0 ");
//     }
//     printf("\n");
//   }
// }


// #include<iostream>
// using namespace std;
//
// class Car{
// public:
//   int wheel;
//
//   void printVal();
//
// };
//
// void Car :: printVal()
// {
//   cout<<wheel;
// }
//
// int main()
// {
//   Car obj;
//   obj.wheel = 4;
//   obj.printVal();
// }




#include<stdio.h>
static int i;
void fun()
{
  i++;
}

int main()
{
  fun();
  fun();
  fun();
  fun();

  printf("fun() Function was Called %d times",i);
}
