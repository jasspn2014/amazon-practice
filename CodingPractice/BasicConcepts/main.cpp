//#include <iostream>
//using namespace std;
//
//class Employee{
//private:
//    string name;
//    int age;
//    int salary;
//
//public:
//    Employee()
//    {
//        name = "NA";
//        age = 0;
//        salary = 0;
//    }
//
//    void setName(string name){
//        this->name = name;
//    }
//
//    void setAge(int age){
//        this->age = age;
//    }
//
//    void setSalary(int salary){
//        this->salary = salary;
//    }
//
//    string getName(){
//        return name;
//    }
//
//    int getAge(){
//        return age;
//    }
//
//    int getSalary()
//    {
//        return salary;
//    }
//
//};
//
//int main() {
//    Employee emp1,emp2;
//
//
//    emp1.setName("Jasmeet");
//    emp1.setSalary(100000);
//    emp1.setAge(21);
//
//    cout<<"Name: "<<emp1.getName()<<endl;
//    cout<<"Age: "<<emp1.getAge()<<endl;
//    cout<<"Salary: "<< emp1.getSalary()<<endl;
//
//    cout<<endl<<endl;
//
//    cout<<"Name: "<<emp2.getName()<<endl;
//    cout<<"Age: "<<emp2.getAge()<<endl;
//    cout<<"Salary: "<< emp2.getSalary()<<endl;
//
////    cout<<endl<<endl;
////
////    Employee emp3("Sukhman",22,50000);
////    cout<<"Name: "<<emp3.getName()<<endl;
////    cout<<"Age: "<<emp3.getAge()<<endl;
////    cout<<"Salary: "<< emp3.getSalary()<<endl;
//
//    return 0;
//
//
//}



#include<iostream>

using namespace std;

class Employee
{
public:
    int age,salary;
    string name,dept;

    Employee(){
        cout<<"Default Constructor Called"<<endl;
        name = "NA";
        age = 0;
        salary = 0;
        dept = "NA";
    }

    Employee(string name, int age, int salary,string dept)
    {
        cout<<"Parameterised Constructor Called"<<endl;
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->dept = dept;
    }

    Employee(Employee &e1)
    {
        cout<<"Copy Constructor Called"<<endl;
        name = e1.name;
        age = e1.age;
        salary = e1.salary;
        dept = e1.dept;
    }

    ~Employee(){
        cout<<"Destructor Called"<<endl;
    }

};


int main()
{
    Employee emp1;
    emp1.name = "Jasmeet";
    emp1.age = 21;
    emp1.salary = 10000;
    emp1.dept = "IT";

    cout<<"Name: "<<emp1.name<<endl;
    cout<<"Age: "<<emp1.age<<endl;
    cout<<"Salary: "<<emp1.salary<<endl;

    cout<<endl<<endl;

    Employee emp2;

    cout << "Name: " << emp2.name << endl;
    cout << "Age: " << emp2.age << endl;
    cout << "Salary: " << emp2.salary << endl;
    cout << "Dept: " << emp2.dept << endl;

    cout<<endl<<endl;

    Employee emp3("NA",0,0,"Computer");

    cout<<"Name: "<<emp3.name<<endl;
    cout<<"Age: "<<emp3.age<<endl;
    cout<<"Salary: "<<emp3.salary<<endl;
    cout<<"Dept: "<<emp3.dept<<endl;
    cout<<endl<<endl;

    cout<<endl<<endl;

    Employee emp4 = emp1;

    cout<<"Name: "<<emp4.name<<endl;
    cout<<"Age: "<<emp4.age<<endl;
    cout<<"Salary: "<<emp4.salary<<endl;
    cout<<"Dept: "<<emp4.dept<<endl;

    cout<<endl<<endl;

}