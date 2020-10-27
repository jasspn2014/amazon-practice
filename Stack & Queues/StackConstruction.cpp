#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

template <typename T>
class Stack
{
	T *st;
	int size;
	int TOP;
public:
	Stack(int cap){
		size = cap;
		st = new T[size];
		TOP = -1;
	}

	void push(T val){
		if(!isFull())
			st[++TOP] = val;
		else
			cout << "Stack Full" << endl;
	}

	void pop(){
		if(!isEmpty())
			TOP--;
	}

	T top(){
		if(!isEmpty())
			return st[TOP];

	}

	bool isEmpty(){
		if(TOP == -1){
			cout << "Stack Empty" << endl;
			return true;
		}else{
			return false;
		}
	}

	bool isFull(){
		if(TOP == size){
			cout << "Stack Full" << endl;
			return true;
		}else{
			return false;
		}
	}

};

int main(){
	Stack<char> st(5);
	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('e');

	while(!st.isEmpty()){
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}
