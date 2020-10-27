#include<stdio.h>
#include<string.h>
struct info{
  char name[50];
  int age;
  int salary;
};

int main()
{
  // Declartion and Initilization
  struct info in = {"Jasmeet", 21, 10000};

  // //Delaring and Init later but during compile time
  // struct info in;

  // char name[] = "Jasmeet";
  // strcpy(in.name,name);
  // in.age = 21;
  // in.salary = 15000;

  printf("Name: %s",in.name);
  printf("\nAge: %d",in.age);
  printf("\nSalary: %d",in.salary);
}
