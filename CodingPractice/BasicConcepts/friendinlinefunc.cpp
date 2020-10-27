//
// Created by jassp on 01-06-2020.
//
#include <bits/stdc++.h>
using namespace std;

////Inline function
//inline int cube(int s)
//{
//    return s*s*s;
//}
//int main()
//{
//    cout << "The cube of 3 is: " << cube(3) << "\n";
//    return 0;
//}


// Friend Function

//
//class Employee{
//string name;
//int age;
//
//public:
//    void setValue(string name, int age)
//    {
//        this->name = name;
//        this->age = age;
//    }
//
//    friend void print(Employee e);
//
//};
//
//void print(Employee e)
//{
//    cout<<"Name: "<<e.name<<endl;
//    cout<<"Age: "<<e.age<<endl;
//}
//
//int main()
//{
//    Employee emp;
//    emp.setValue("Jasmeet", 21);
//    print(emp);
//}


// Input Data in one Line

//int countspaces(string str)
//{
//    int space = 0,i = 0;
//    while(str[i]!= '\0')
//    {
//        if(str[i] == char(32))
//            space++;
//
//        i++;
//    }
//    return space;
//}
//
//
//int split_string_to_array(string str,int *arr){
//    int i = 1, j =  0;
//    int space = countspaces(str);
//    arr[i]
//    while(space != 0)
//    {
//        if(str[i] == char(32))
//        {
//            space--;
//        }
//    }
//
//    return 1;
//}
//
//
//
//int main()
//{
//    string str;
//    int arr[100];
//    str = "10 15 20 25 30 35";
//    int n = split_string_to_array(str,arr);
////    for(int i=0;i<n;i++)
////        cout<<arr[i]<<" ";
//}

//int main()
//{
//   string text = "Let me split this into words";
//
//    istringstream iss(text);
//    vector<string> results((istream_iterator<string>(iss)),
//                                     istream_iterator<string>());
//
//    for(int i = 0;i<results.size();i++)
//    {
//        cout<<results[i]<<endl;
//    }
//}