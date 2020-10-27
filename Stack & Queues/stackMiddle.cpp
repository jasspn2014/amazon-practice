#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

void printStack(stack<int> &st){
	stack<int> s2;
	while(!st.empty()){
		int tmp = st.top();
		st.pop();
		s2.push(tmp);
		cout << tmp << endl;
	}

	while(!s2.empty()){
		st.push(s2.top());
		s2.pop();
	}
}

void removeAndPush(stack<int> &st, int target){
	if(target == 0){
		st.pop();
		return;
	}

	int tmp = st.top();
	st.pop();
	removeAndPush(st,target-1);
	st.push(tmp);
}


void deleteMiddleElement(stack<int> &st){
	int n = st.size();
	int mid = ceil((double)n/2);
	removeAndPush(st,mid);
}

int main(){
	stack<int> st;
	st.push(11);
	st.push(22);
	st.push(33);
	st.push(44);
	st.push(55);
	st.push(66);
	st.push(77);
	printStack(st);
	deleteMiddleElement(st);
	printStack(st);
	return 0;
}
