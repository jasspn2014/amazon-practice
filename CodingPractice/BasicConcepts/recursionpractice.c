// //Program of Recusion for Printing Series Ascending
// #include<stdio.h>
//
// //Recursive Function
// void func(int n)
// {
//   if(n==1)
//     printf("%d ",n);
//   else{
//     func(n-1);
//     printf("%d ",n);
//   }
// }
//
//
// int main()
// {
//   int n = 5;
//   //Function Calling
//   func(5);
// }








// //Program of Recusion for Printing Series Descending
// #include<stdio.h>
//
// //Recursive Function
// void func(int n)
// {
//   if(n==1)
//     printf("%d ",n);
//   else{
//     printf("%d ",n);
//     func(n-1);
//   }
// }
//
//
// int main()
// {
//   int n = 5;
//   //Function Calling
//   func(5);
// }









// //Program of Recusion for Factorial
// #include<stdio.h>
//
// //Recursive Function for Calculating Factorial
// int fact(int n)
// {
//   if(n == 1 || n == 0)
//     return 1;
//
//     return n*fact(n-1);
// }
//
//
// int main()
// {
//   int n = 5;
//   printf("Factorial of %d is %d",n,fact(n)); // Function Calling
// }







// //Program of Recusion for Fibonacci Series
// #include<stdio.h>
//
// //Recursive Function
// int fibo(int n)
// {
//   if(n==1)
//     return 0;
//   else if(n==2 || n==3)
//     return 1;
//   else
//     return(fibo(n-1) + fibo(n-2));
//
// }
//
//
// int main()
// {
//   int n = 6;
//   int i;
//     printf("%d ",fibo(n));
//
// }








//Program of Recusion for Checking Pallindrome or Not
#include<stdio.h>
#include<string.h>

//Recursive Function
int isPal(char string1[],int start,int end)
{

  if(start>=end)
    return 1;
  else if(string1[start] != string1[end])
    return 0;
  else
    return isPal(string1,start+1,end-1);

}


int main()
{
  char str[100];
  scanf("%s",str);
  int res = isPal(str,0,strlen(str)-1);
  if(res)
    printf("String is Pallindrome");
  else
    printf("String is Not Pallindrome");

// }



// //Program of Recusion for Count Digits
// #include<stdio.h>
// //Recursive Function
// int countno(int n)
// {
//   if(n<10)
//     return count+1;
//   else{
//     count++;
//     return countno(n/10);
//   }
// }
//
//
// int main()
// {
//   int num = 15000;
//   printf("No of Digits are: %d %d",countno(num));
// }
//





// //Program of Recusion for Sum of Digits
// #include<stdio.h>
//
// //Recursive Function
// int sumDig(int n,int sum)
// {
//   if(n<10)
//     return sum+n;
//   else
//     return sumDig(n/10,sum+n%10);
// }
//
//
// int main()
// {
//   int n = 1451;
//   printf("No of Digits are: %d",sumDig(n,0));
// }
