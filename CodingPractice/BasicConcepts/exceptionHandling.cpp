//
// Created by jassp on 03-06-2020.
//

// 1. Basic Exception Handling
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a & b: ";
    cin>>a>>b;

    int div;
    try{
        if(b == 0)
            throw "Divide By Zero Error";
        div = a/b;
        cout<<div;
    }
    catch(const char *msg){
        cout<<msg;
    }


    cout<<endl<<endl;
    int c,d;
    cout<<"Enter c & d: ";
    cin>>c>>d;

    int mul;
    mul = c*d;
    cout<<mul;

    return 0;

}


// 2. Flow of Try/Catch
#include<iostream>
using namespace std;

class ExceptionHandlingTest
{
public:
    ExceptionHandlingTest(){
        cout<<"Constructor Called"<<endl;
    }

    ~ExceptionHandlingTest()
    {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    try{
        ExceptionHandlingTest obj;
        throw 10;
    }
    catch (int x) {
        cout<<x<<endl;
    }

}

//3. Catching Exception
#include<iostream>
using namespace std;

int main()
{
    try{
        throw '5';
    }
    catch(int x)
    {
        cout<<"Int Catch Called: "<< x;
    }
    catch (char ch) {
        cout<<"Char Catch Called: "<<ch;
    }
}


//4. Default Catch
#include<iostream>
using namespace std;

int main()
{
    try{
        throw 'a';
    }
    catch(int x)
    {
        cout<<"Int Catch Called: "<< x;
    }
    catch (double d) {
        cout<<"Double Catch Called: "<<d;
    }
    catch (...) {
        cout<<"Default Catch Called";
    }
}

// 5. Problem

#include<iostream>
using namespace std;
int main()
{
    int x = -1;
    cout<<"Before try"<<endl;
    try{
        cout<<"Inside try"<<endl;
        if(x<0)
        {
            throw x;
            cout<<"After Throw"<<endl;
        }
    }
    catch(char x)
    {
        cout<<"Char Catch Called"<<endl;
    }

    catch(...)
    {
        cout<<"Default Catch Called"<<endl;
    }

    catch(int x)
    {
        cout<<"int Catch Called"<<endl;
    }

    cout<<"After try/Catch New Statements"<<endl;
}
