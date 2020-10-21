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
	cout << endl;
}

void SplitLinkedList(Node *head, Node **a, Node **b){
	if(head == NULL)
		return;
	Node *fast_ptr = head->next, *slow_ptr = head;
	while(fast_ptr != NULL){
		fast_ptr = fast_ptr->next;
		if(fast_ptr != NULL){
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}
	}

	*a = head;
	*b = slow_ptr->next;
	slow_ptr->next = NULL;

}

Node* mergeList(Node *list1, Node *list2){
	Node *result = NULL;
	if(list1 == NULL && list2 == NULL){
		return NULL;
	}
	if(list1 == NULL){
		return list2;
	}
	if(list2 == NULL){
		return list1;
	}

	if(list1->data < list2->data){
		result = list1;
		result->next = mergeList(list1->next, list2);
	}
	else{
		result = list2;
		result->next = mergeList(list1,list2->next);
	}
	return result;
}

void sortLinkedList(Node **start){
	Node *head = *start;
	if(head == NULL || head->next == NULL)
		return;
	Node *a,*b;
	SplitLinkedList(head,&a,&b);
	printLinkedList(a);
	printLinkedList(b);
	sortLinkedList(&a);
	sortLinkedList(&b);


	*start = mergeList(a,b);
}

int main(){
	int arr[] = {10,55,7,16,1,8,32,40,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	Node *start = NULL;
	for(int i=0;i<n;i++)
		start = insertNode(start,arr[i]);

	printLinkedList(start);
	sortLinkedList(&start);
	printLinkedList(start);
	return 0;
}
