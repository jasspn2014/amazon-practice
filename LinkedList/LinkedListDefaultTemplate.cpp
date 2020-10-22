#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

struct Node{
	int data;
	struct Node *next;

	Node(int d){
		data = d;
		next = NULL;
	}
};

Node *insertNode(Node *head, int data){
	if(head == NULL)
		return new Node(data);
	else{
		Node *ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = new Node(data);
		return head;
	}
}

void printLinkedList(Node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int countLinkedList(Node *head){
	int cnt = 1;
	Node *fast = head->next,*slow = head;
	while(fast != NULL){
		cnt++;
		fast = fast->next;
		if(fast != NULL){
			cnt++;
			fast = fast->next;
			slow = slow->next;
		}
	}
	cout << "Slow : " << slow->data << endl;
	cout << "Fast: " << fast->data << endl;
	return cnt;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);

	Node *start = NULL;
	for(int i=0;i<n;i++)
		start = insertNode(start,arr[i]);

	printLinkedList(start);
	cout << endl;
	cout << countLinkedList(start);
	return 0;
}
