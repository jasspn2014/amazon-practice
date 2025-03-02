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

Node* reverse(Node *head, int k){
	Node *curr = head,*prev = NULL,*next = NULL;
	int count = 0;
	while(count++ < k && curr != NULL){
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	if(next){
		head->next = reverse(next,k);
	}
	return prev;
}

void printLinkedList(Node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	Node *start = NULL;
	for(int i=0;i<n;i++)
		start = insertNode(start,arr[i]);
	int k = 3;
	printLinkedList(start);
	start = reverse(start,k);
	cout << endl;
	printLinkedList(start);
	return 0;
}
