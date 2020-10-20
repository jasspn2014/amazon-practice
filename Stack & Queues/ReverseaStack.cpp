#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;


void printStack(stack<int> &st){
	stack<int> tmp;
	while(!st.empty()){
		cout << st.top() << " ";
		tmp.push(st.top());
		st.pop();
	}
	while(!tmp.empty()){
		st.push(tmp.top());
		tmp.pop();
	}
}

void insert(stack<int> &st, int data){
	if(st.empty()){
		st.push(data);
		return;
	}
	int tmp = st.top();
	st.pop();
	insert(st,data);
	st.push(tmp);
}

void reverseStack(stack<int> &st){
	if(st.size() == 1)
		return;
	int tmp = st.top();
	st.pop();
	reverseStack(st);
	insert(st,tmp);

}

int main(){
	stack<int> st;
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);

	printStack(st);
	cout << endl;
	reverseStack(st);
	printStack(st);
	return 0;
}
