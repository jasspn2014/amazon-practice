//////
////// Created by jassp on 16-06-2020.
//////
////
////#include<iostream>
////using namespace std;
////#define MAX 100
////int stack[MAX];
////
////int top = -1;
////void push(int);
////int pop();
////int topFunc();
////bool isFull();
////bool isEmpty();
////
////int main()
////{
////    while(true)
////    {
////        cout<<endl<<endl;
////        cout<<"Select your Choice: "<<endl;
////        cout<<"1. Push"<<endl;
////        cout<<"2. Pop"<<endl;
////        cout<<"3. Top"<<endl;
////        cout<<"4. Exit"<<endl;
////
////
////        int option;
////        cout<<"Enter Choice: ";
////        cin>>option;
////        int val;
////        switch(option)
////        {
////            case 1: cout<<"Enter Val: ";
////                    cin>>val;
////                    push(val);
////                    cout<<"Value Pushed"<<endl;
////                    break;
////            case 2:
////                    val = pop();
////                    cout<<"Value Popped: "<<val<<endl;
////                    break;
////
////            case 3: val = topFunc();
////                    cout<<"Top of the Stack: "<<val<<endl;
////                break;
////
////            case 4: exit(0);
////
////            default: cout<<"Enter Correct Choice: "<<endl;
////        }
////
////    }
////
////}
////
////
////void push(int data)
////{
////    if(isFull())
////        cout<<"Stack Overflow";
////    else
////        stack[++top] = data;
////}
////
////int pop()
////{
////    if(isEmpty())
////        cout<<"Stack is Empty";
////    else
////        return stack[top--];
////}
////
////int topFunc()
////{
////    if(isEmpty())
////        cout<<"Stack is Empty";
////    else
////        return stack[top];
////}
////
////bool isFull()
////{
////    if(top == MAX-1)
////        return true;
////    else
////        return false;
////}
////
////bool isEmpty()
////{
////    if(top == -1)
////        return true;
////    else
////        return false;
////}
//
//
//
//
//// Infix to Prefix
//
////#include<iostream>
////#include<stack>
////#include<algorithm>
////using namespace std;
////
////
////bool isOperator(char ch)
////{
////    if(isalnum(ch))
////        return false;
////
////    return true;
////}
////
////int getPriority(char ch)
////{
////    if(ch == '^')
////        return 3;
////    else if(ch == '%' || ch == '/' || ch == '*')
////        return 2;
////    else if(ch == '+' || ch == '-')
////        return 1;
////    else
////        return 0;
////}
////
////string infixtoPrefix(string infix)
////{
////    int n = infix.size();
////    reverse(infix.begin(), infix.end());
////
////    for(int i=0;i<n;i++)
////    {
////        if(infix[i] == '(')
////            infix[i] = ')';
////
////        else if(infix[i] == ')')
////            infix[i] = '(';
////    }
////
////    string prefix = "";
////    stack<char> st;
////
////    for(int i=0;i<n;i++)
////    {
////        if(!isOperator(infix[i]))
////            prefix += infix[i];
////
////        else if(infix[i] == '(')
////            st.push(infix[i]);
////
////        else if(infix[i] == ')')
////        {
////            while(st.top() != '(')
////            {
////                prefix += st.top();
////                st.pop();
////            }
////            st.pop();
////        }
////        else if(isOperator(infix[i]) && st.empty())
////            st.push(infix[i]);
////
////        else if(isOperator(infix[i]) && getPriority(st.top())<=getPriority(infix[i]))
////            st.push(infix[i]);
////
////        else
////        {
////            prefix += st.top();
////            st.pop();
////            st.push(infix[i]);
////        }
////
////    }
////
////    while(!st.empty()) {
////        prefix += st.top();
////        st.pop();
////    }
////
////    reverse(prefix.begin(), prefix.end());
////
////    return prefix;
////    }
////
////
////
////
////int main()
////{
////    string infix;
////    getline(cin,infix);
////
////    cout<<"Infix String: "<<infix<<endl;
////
////    cout<<"Prefix Conversion: "<<infixtoPrefix(infix)<<endl;
////}
//
//
//
////// Evaluation of Prefix
////
////#include<iostream>
////#include<stack>
////#include<algorithm>
////using namespace std;
////
////
////bool isOperator(char ch)
////{
////    if(isalnum(ch))
////        return false;
////
////    return true;
////}
////
////
////
////int evaluatePrefix(string prefix)
////{
////    int n = prefix.size();
////    stack<int> st;
////
////    for(int i=n-1;i>=0;i--)
////    {
////        if(!isOperator(prefix[i]))
////            st.push(prefix[i]-48);
////
////        else
////        {
////            int x = st.top();
////            st.pop();
////            int y = st.top();
////            st.pop();
////
////            if(prefix[i] == '+')
////                st.push(x+y);
////            if(prefix[i] == '-')
////                st.push(x-y);
////            if(prefix[i] == '*')
////                st.push(x*y);
////            if(prefix[i] == '/')
////                st.push(x/y);
////
////        }
////    }
////
////    return st.top();
////}
////
////
////
////
////int main() {
////    string prefix;
////    getline(cin, prefix);
////    cout<<"Prefix String "<<prefix<<" Evaluation is: "<<evaluatePrefix(prefix);
////
////}
//
//// Infix to Postfix
//
//
////
////#include<iostream>
////#include<stack>
////#include<algorithm>
////using namespace std;
////
////
bool isOperator(char ch)
{
    if(isalnum(ch))
        return false;

    return true;
}

int getPriority(char ch)
{
    if(ch == '^')
        return 3;
    else if(ch == '%' || ch == '/' || ch == '*')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
////
////
//string infixToPostfix(string infix)
//{
//    infix = '(' + infix + ')';
//    int l = infix.size();
//    stack<char> char_stack;
//    string output;
//
//    for (int i = 0; i < l; i++) {
//
//        // If the scanned character is an
//        // operand, add it to output.
//        if (isalpha(infix[i]) || isdigit(infix[i]))
//            output += infix[i];
//
//            // If the scanned character is an
//            // ‘(‘, push it to the stack.
//        else if (infix[i] == '(')
//            char_stack.push('(');
//
//            // If the scanned character is an
//            // ‘)’, pop and output from the stack
//            // until an ‘(‘ is encountered.
//        else if (infix[i] == ')') {
//
//            while (char_stack.top() != '(') {
//                output += char_stack.top();
//                char_stack.pop();
//            }
//
//            // Remove '(' from the stack
//            char_stack.pop();
//        }
//
//            // Operator found
//        else {
//
//            if (isOperator(char_stack.top())) {
//                while (getPriority(infix[i])
//                       <= getPriority(char_stack.top())) {
//                    output += char_stack.top();
//                    char_stack.pop();
//                }
//
//                // Push current Operator on stack
//                char_stack.push(infix[i]);
//            }
//        }
//    }
//    return output;
//}
////
////
////int main()
////{
////    string infix;
////    getline(cin,infix);
////
////    cout<<"Infix String: "<<infix<<endl;
////
////    cout<<"Postfix Conversion: "<<infixToPostfix(infix)<<endl;
////}
//
//
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void stockspan(int *arr, int n)
//{
//    int newArr[n];
//    for(int i=n-1;i>=0;i--)
//    {
//        int count = 1;
//        for(int j=i-1;j>=0;j--)
//        {
//            if(arr[i]>arr[j])
//                count++;
//            else
//                break;
//        }
//
//        newArr[i] = count;
//    }
//    for(int i=0;i<n;i++)
//        cout<<newArr[i]<<" ";
//}
//int main()
//{
//    int arr[] = {30,20,10};
//    int n = 3;
//
//    cout<<"Prices Are: ";
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//
//    cout<<endl;
//
//    cout<<"StockSpan Array is: ";
//    stockspan(arr,n);
//
//
//}

//
//#include<iostream>
//using namespace std;
//
//int N = 4;
//bool placeQueen(int board[][], int col)
//{
//    if(col>=N)
//        return true;
//
//    for(int i = 0;i<N;i++)
//    {
//        if(isSafe(board,i,col))
//        {
//            board[i][col] = 1;
//            if(placeQueen(board,col+1))
//                return true;
//
//            board[i][col] = 0;
//        }
//    }
//
//    return false;
//}
//
//
//bool isSafe(int board[][], int row, int col)
//{
//    int i,j;
//    for(int i=0;i<col;i++)
//        if(board[row][i])
//            return false;
//
//        for(int i =row, j = col; i>=0 && j>=0; i--,j--)
//            if(board[i][j])
//                return false;
//
//
//
//
//}
//int main()
//{
//    int board[N][N];
//
//    boolPac
//    return 0;
//}

#include <iostream>
#define MAX 100000
#define lli long long int
using namespace std;

void solve()
{
    lli N,S;
    cin>>S>>N;

    if(N>=S)
    {
        if(S == 1)
        {
            cout<<1;
            return;
        }
        else if(S%2 == 0)
        {
            cout<<1<<endl;
            return;
        }
        else
        {
            cout<<2<<endl;
            return;
        }
    }
    else
    {
        if(S%2 == 0 && S%N == 0)
        {
            cout<<S/N<<endl;
            return;
        }
        else
        {
            int extra = S%N;
            int rup = S/N;
            if(extra == 1)
                rup += 1;
            else if(extra%2 == 0)
                rup += 1;
            else
                rup += 2;

            cout<<rup<<endl;
        }

    }

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

// Code By Jasmeet