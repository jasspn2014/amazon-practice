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

Node* reverseIterative(Node *head){
	Node *curr = head,*prev = NULL,*next = NULL;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}
	return prev;
}


Node *reverseRecursive(Node *head, Node *prev){
	if(head -> next ==  NULL){
		head->next = prev;
		return head;
	}
	Node *tmp = head->next;
	head->next = prev;
	return reverseRecursive(tmp, head);

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

	printLinkedList(start);
	start = reverseRecursive(start,NULL);
	cout << endl;
	printLinkedList(start);
	return 0;
}
