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

void insert(stack<int> &st, int val){
	if(st.empty() || st.top() > val){
		st.push(val);
		return;
	}
	int tmp = st.top();
	st.pop();
	insert(st,val);
	st.push(tmp);
}

void sortStack(stack<int> &st){
	if(st.size() == 1){
		return;
	}
	int tmp = st.top();
	st.pop();
	sortStack(st);
	insert(st,tmp);
}

int main(){
	stack<int> st;
	st.push(10);
	st.push(55);
	st.push(8);
	st.push(2);
	st.push(17);
	st.push(15);

	printStack(st);
	cout << endl;
	sortStack(st);
	printStack(st);
	return 0;
}
