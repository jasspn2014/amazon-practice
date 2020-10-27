//
// Created by jassp on 04-06-2020.
//

// Writing in a File
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//    char data[100];
//
//    ofstream outfile;
//    outfile.open("D:/afile1.txt");
//
//    cout<<"Writing to the File"<<endl;
//    cout<<"Enter your Name: ";
//    cin.getline(data,100);
//
//    outfile<<data<<endl;
//
//    cout<<"Enter Your Age: ";
//    cin>>data;
//    cin.ignore();
//
//    outfile<<data<<endl;
//
//    outfile.close();
//}


// Reading From a File
//
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//    char data[100];
//
//    ifstream infile;
//    infile.open("D:/afile1.txt");
//
//    cout<<"Reading from a File"<<endl;
//    infile>>data;
//
//    cout<<data<<endl;
//
//    infile>>data;
//
//    cout<<data<<endl;
//
//    infile.close();
//}



//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//    ofstream outfile;
//    outfile.open("file1.txt");
//    string str1 = "Hello";
//    string str2 = "World";
//    int a = 10;
//    outfile<<a<<' '<<str1<<' '<<str2<<"\n";
//
//    cout<<"Data Written";
//    outfile.close();
//}


//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//    ifstream infile;
//    infile.open("file1.txt");
//    char ch;
//    while(!infile.eof())
//    {
//        infile.get(ch);
//        cout<<ch;
//    }
//
//    infile.close();
//}

//
//#include <iostream>
//#define ull unsigned long long
//using namespace std;
//
//int strengthCount(ull int ts, ull int js, ull int count)
//{
//    if(ts == 1 || ts == 2)
//        return 0;
//
//    if(js == ts)
//        return count;
//
//    if(ts % 2 != 0 && js%2 == 0)
//        return strengthCount(ts, js+1, count+1);
//
//    if(ts%2 == 0)
//        return strengthCount(ts/2, js/2,count);
//
//    return strengthCount(ts,js+1, count);
//}
//
//void solve()
//{
//    ull int ts, js = 1, count;
//    cin>>ts;
//    count = strengthCount(ts, js, 0);
//    cout<<count<<endl;
//}
//
//
//int main() {
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}


//#include <iostream>
//#define MAX 100000
//using namespace std;
//
//void solve()
//{
//    string str;
//    getchar();
//    getline(cin,str);
//    int i = 0;
//    int len = str.size();
//    cout<<str;
//    cout<<len;
//    bool isRealFancy = false;
//    while(i<len-4)
//    {
//        if(str[i] == 'n' && str[i+1] == 'o' && str[i+2] == 't' && str[i+4] == ' ')
//                isRealFancy = true;
//
//        i++;
//    }
//
//    if(isRealFancy)
//        cout<<"Real Fancy"<<endl;
//    else
//        cout<<"regularly fancy"<<endl;
//
//}
//
//int main() {
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
//    return 0;
//}



#include <iostream>
#define MAX 100000
using namespace std;

void solve()
{
    int s;
    int w1,w2,w3;

    cin>>s>>w1>>w2>>w3;
    int sum = w1+w2+w3;
    int count = 0;
    while(sum>s)
    {
        count++;
        sum -= s;
    }

    cout<<count+1<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
