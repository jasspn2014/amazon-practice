//Program of Recusion for Checking Pallindrome or Not
#include<stdio.h>

//Recursive Function
int calGcd(int a, int b)
{
  if(a==b)
    return a;
  else
  {
    if(a>b)
      return calGcd(a-b,a);
    else
      return calGcd(a,b-a);
  }


}


int main()
{
  int n1,n2;
  printf("Enter Two Numbers: ");
  scanf("%d %d",&n1,&n2);
  printf("GCD of %d & %d is: %d",n1,n2,calGcd(n1,n2));

}
