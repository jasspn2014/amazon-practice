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

Node *reverse(Node *head){
	Node *prev = NULL, *curr = head, *next;

	while(curr != NULL){
		next = curr->next;
		curr->next = prev;

		prev = curr;
		curr = next;
	}

	return prev;
}

Node *addTwoList(struct Node *first, struct Node *second)
{

    int sum, carry = 0;
    Node *res = NULL,*ptr;
    while(first != NULL || second != NULL){
        int d1 = (first != NULL) ? first->data : 0;
        int d2 = (second != NULL) ? second->data : 0;

        sum = carry + d1 + d2;
        carry = 0;
        if(sum >= 10){
            carry = sum/10;
            sum = sum%10;
        }



        Node *tmp = new Node(sum);

        if(res == NULL){
            res = tmp;
            ptr = res;
        }
        else{
            ptr->next = tmp;
            ptr = ptr->next;
        }

        if(first != NULL)
            first = first->next;
        if(second != NULL)
            second = second->next;
    }

    if(carry != 0){
        Node *tmp = new Node(1);
        ptr->next = tmp;
    }

    return res;
}

int main(){

	Node *first = NULL, *second = NULL;

	first = insertNode(first,8);
	first = insertNode(first,4);
	first = insertNode(first,5);

	second = insertNode(second,4);
	second = insertNode(second,5);

	first = reverse(first);
	second = reverse(second);

	printLinkedList(first);
	cout << endl;
	printLinkedList(second);
	cout << endl;
	Node *res = NULL;
  res = addTwoList(first,second);


	printLinkedList(res);

	return 0;
}
