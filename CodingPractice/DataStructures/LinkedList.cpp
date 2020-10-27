//    //
//// Created by jassp on 11-06-2020.
////
//
////
////// Singly Linked List
//#include<bits/stdc++.h>
//using namespace std;
//
//typedef struct SinglyLinkedList{
//    int data;
//    SinglyLinkedList *next;
//} Node;
//
//Node* insertNode(Node*, int);
//Node* insertNodeAtStarting(Node*, int);
//Node* insertNodeAfterElement(Node*, int, int);
//Node* insertNodeBeforeElement(Node*, int, int);
//Node* deleteAtEnd(Node *);
//Node* deleteAtStarting(Node *);
//Node* deleteNodeAfterElement(Node *, int);
//Node* deleteNodeBeforeElement(Node *, int);
//Node* MergeTwoSorted(Node*, Node*);
//bool isPallindrome(Node*);
//void printLinkedList(Node*);
//
//
//Node *FrontBackSplit(Node *source, Node **frontRef, Node **backRef)
//{
//    Node *fast = source;
//    Node *slow = source;
//
//    while(fast->next != NULL && fast->next->next != NULL)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//
//
//    *frontRef = source;
//    *backRef = slow->next;
//    slow->next = NULL;
//}
//
//Node *SortedMerge(Node *a, Node *b)
//{
//    Node *result = NULL;
//    if(a == NULL)
//        return b;
//    if(b == NULL)
//        return a;
//
//    if(a->data <= b->data) {
//        result = a;
//        result->next = SortedMerge(a->next, b);
//    } else{
//        result = b;
//        result->next = SortedMerge(a,b->next);
//    }
//
//    return result;
//}
//
//void MergeSort(Node **head_ref)
//{
//        Node *head = *head_ref;
//        Node *a,*b;
//        if(head == NULL || head->next == NULL)
//            return;
//
//        // Split Linked List
//        FrontBackSplit(head,&a, &b);
//        printLinkedList()
//        //Recursive Calls on Both
//        MergeSort(&a);
//        MergeSort(&b);
//
//        *head_ref = SortedMerge(a,b);
//}
//
//
//
//
//int main()
//{
//    Node* start = NULL;
//    int arr[] = {15,92,22,10,120,33,1,81,19,23,5,177,42};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    for(int i=0;i<n;i++)
//        start = insertNode(start,arr[i]);
//
//    MergeSort(&start);
//    printLinkedList(start);
//}
//
//
//Node* insertNode(Node *start, int val)
//{
//    Node *node;
//    node = (Node *) malloc(sizeof(Node));
//
//    node->data = val;
//    node->next = NULL;
//    if(start == NULL)
//    {
//        start = node;
//        return start;
//
//    } else{
//        Node *ptr;
//        ptr = start;
//        while(ptr->next != NULL)
//        {
//            ptr = ptr->next;
//        }
//
//        ptr->next = node;
//        return start;
//    }
//
//}
//
//Node* insertNodeAtStarting(Node *start, int val)
//{
//    Node *node;
//    node = (Node *) malloc(sizeof(Node));
//
//    node->data = val;
//
//    node->next = start;
//    start = node;
//
//    return start;
//}
//
//Node* insertNodeAfterElement(Node *start, int val, int after)
//{
//    Node *node;
//    node = (Node *) malloc(sizeof(Node));
//
//    node->data = val;
//
//    Node *ptr = start;
//    while(ptr->data != after)
//    {
//        ptr = ptr->next;
//    }
//
//    node->next = ptr->next;
//    ptr->next = node;
//
//    return start;
//}
//
//
//Node* insertNodeBeforeElement(Node *start, int val, int before)
//{
//    Node *node;
//    node = (Node *) malloc(sizeof(Node));
//
//    node->data = val;
//
//    Node *ptr = start;
//    Node *preptr = ptr;
//    while(ptr->data != before)
//    {
//        preptr = ptr;
//        ptr = ptr->next;
//    }
//
//    node->next = ptr;
//    preptr->next = node;
//
//    return start;
//}
//
//Node* deleteAtEnd(Node *start)
//{
//    Node *ptr = start;
//    Node *preptr = ptr;
//    while(ptr->next!=NULL)
//    {
//        preptr = ptr;
//        ptr = ptr->next;
//    }
//    preptr->next = NULL;
//    free(ptr);
//
//    return start;
//}
//
//Node* deleteAtStarting(Node *start)
//{
//    Node *ptr = start;
//    start = start->next;
//    free(ptr);
//
//    return start;
//}
//
//Node* deleteNodeAfterElement(Node *start,int after)
//{
//
//    return start;
//}
//
//Node* deleteNodeBeforeElement(Node *start, int before)
//{
//    return start;
//}
//
//
//void printLinkedList(Node *start)
//{
//    cout<<"Linked List is: ";
//    Node *ptr;
//    ptr = start;
//    while(ptr!=NULL) {
//        cout << ptr->data<<" ";
//        ptr = ptr->next;
//    }
//}
//
//
//bool isPallindrome(Node *start)
//{
//    Node* ptr = start;
//    string str = "";
//    while(ptr!=NULL)
//    {
//        str += ptr->data;
//        ptr = ptr->next;
//    }
//    int size = str.size()-1;
//    string str1 = str;
//    reverse(str.begin(),str.begin()+size);
//    if(str1 == str)
//        return true;
//    else
//        return false;
//}
//
//
//Node* MergeTwoSorted(Node* head1, Node* head2)
//{
//    Node *head3 = NULL;
//    Node *ptr;
//    while(head1!=NULL && head2!=NULL)
//    {
//        if(head1->data < head2->data)
//        {
//            if(head3 == NULL) {
//                head3 = head1;
//                ptr = head3;
//            }
//            else
//            {
//                ptr->next = head1;
//                ptr = ptr->next;
//            }
//            head1 = head1->next;
//        }
//        else
//        {
//            if(head3 == NULL) {
//                head3 = head2;
//                ptr = head3;
//            }
//            else
//            {
//                ptr->next = head2;
//                ptr = ptr->next;
//            }
//            head2 = head2->next;
//        }
//
//    }
//
//    if(head1 == NULL)
//    {
//        while(head2 != NULL)
//        {
//            ptr->next = head2;
//            head2 = head2->next;
//        }
//    }
//
//    if(head2 == NULL)
//    {
//        while(head1 != NULL)
//        {
//            ptr->next = head1;
//            head1 = head1->next;
//        }
//    }
//    return head3;
//}
//
//
//// Doubly Linked List
////#include<iostream>
////using namespace std;
////
////typedef struct LinkedList{
////    struct LinkedList *prev;
////    int data;
////    struct LinkedList *next;
////} Node;
////
////Node* insertNode(Node*, int);
////Node* insertNodeAtStarting(Node*, int);
////Node* insertNodeAfterElement(Node*, int, int);
////Node* insertNodeBeforeElement(Node*, int, int);
////Node* deleteAtEnd(Node *);
////Node* deleteAtStarting(Node *);
////Node* deleteNodeAfterElement(Node *, int);
////Node* deleteNodeBeforeElement(Node *, int);
////
////void printLinkedList(Node*);
////void printReverseLinkedList(Node*);
////
////int main()
////{
////    Node *start = NULL;
////    while(true)
////    {
////        cout<<endl<<endl;
////        cout<<"Select your Choice: "<<endl;
////        cout<<"1. Insert A Node at End"<<endl;
////        cout<<"2. Insert A Node at Beginning"<<endl;
////        cout<<"3. Insert A Node After a Node"<<endl;
////        cout<<"4. Insert A Node Before a Node"<<endl;
////        cout<<"5. Delete A Node at End"<<endl;
////        cout<<"6. Delete A Node at Beginning"<<endl;
////        cout<<"7. Delete A Node After a Node"<<endl;
////        cout<<"8. Delete A Node at Before a Node"<<endl;
////        cout<<"9. Print Linked List"<<endl;
////        cout<<"10. Print Reverse Linked List"<<endl;
////        cout<<"11. Exit"<<endl;
////
////        int option;
////        cout<<"Enter Choice: ";
////        cin>>option;
////        int val,before,after;
////        switch(option)
////        {
////            case 1: cout<<"Enter Val: ";
////                cin>>val;
////                start = insertNode(start,val);
////                cout<<"Node Inserted at the End"<<endl;
////                break;
////            case 2: cout<<"Enter Val: ";
////                cin>>val;
////                start = insertNodeAtStarting(start,val);
////                cout<<"Node Inserted at the Beginning"<<endl;
////                break;
////
////            case 3: cout<<"After Which Element you want to Insert Node: ";
////                cin>>after;
////                cout<<"Enter Val: ";
////                cin>>val;
////                start = insertNodeAfterElement(start, val, after);
////                cout<<"Node Inserted After "<<after<<endl;
////                break;
////            case 4: cout<<"Before Which Element you want to Insert Node: ";
////                cin>>before;
////                cout<<"Enter Val: ";
////                cin>>val;
////                start = insertNodeBeforeElement(start, val, before);
////                cout<<"Node Inserted Before "<<before<<endl;
////                break;
////            case 5: start = deleteAtEnd(start);
////                cout<<"Node at End Deleted"<<endl;
////                break;
////            case 6: start = deleteAtStarting(start);
////                cout<<"Node at Starting Deleted"<<endl;
////                break;
////            case 7: cout<<"After Which Element you want to Delete Node: ";
////                cin>>after;
////                start = deleteNodeAfterElement(start, after);
////                cout<<"Node After "<<after<<" Deleted"<<endl;
////                break;
////            case 8: cout<<"Before Which Element you want to Delete Node: ";
////                cin>>before;
////                start = deleteNodeBeforeElement(start, before);
////                cout<<"Node Before "<<after<<" Deleted"<<endl;
////                break;
////            case 9: printLinkedList(start);
////                break;
////
////            case 10: printReverseLinkedList(start);
////                break;
////
////            case 11: exit(0);
////
////            default: cout<<"Enter Correct Choice: "<<endl;
////        }
////
////    }
////}
////
////
////Node* insertNode(Node *start, int val)
////{
////    Node *node;
////    node = (Node *) malloc(sizeof(Node));
////
////    node->data = val;
////
////    if(start == NULL)
////    {
////        node->prev = NULL;
////        node->next = NULL;
////        start = node;
////        return start;
////
////    } else{
////        Node *ptr;
////        ptr = start;
////        while(ptr->next != NULL)
////        {
////            ptr = ptr->next;
////        }
////
////        ptr->next = node;
////        node->prev =  ptr;
////        node->next = NULL;
////        return start;
////    }
////
////}
////
////Node* insertNodeAtStarting(Node *start, int val)
////{
////    Node *node;
////    node = (Node *) malloc(sizeof(Node));
////
////    node->data = val;
////    node->prev = NULL;
////    start->prev = node;
////    node->next = start;
////    start = node;
////
////    return start;
////}
////
////Node* insertNodeAfterElement(Node *start, int val, int after)
////{
////    Node *node;
////    node = (Node *) malloc(sizeof(Node));
////
////    node->data = val;
////
////    Node *ptr = start;
////    while(ptr->data != after)
////    {
////        ptr = ptr->next;
////    }
////
////    node->prev = ptr;
////    node->next = ptr->next;
////    ptr->next->prev = node;
////    ptr->next = node;
////
////
////    return start;
////}
////
////
////Node* insertNodeBeforeElement(Node *start, int val, int before)
////{
////    Node *node;
////    node = (Node *) malloc(sizeof(Node));
////
////    node->data = val;
////
////    Node *ptr = start;
////    Node *preptr = ptr;
////    while(ptr->data != before)
////    {
////        preptr = ptr;
////        ptr = ptr->next;
////    }
////
////    node->prev = ptr->prev;
////    ptr->prev->next = node;
////    ptr->prev = node;
////    node->next = ptr;
////
////    return start;
////}
////
////Node* deleteAtEnd(Node *start)
////{
////    Node *ptr = start;
////    Node *preptr = ptr;
////    while(ptr->next!=NULL)
////    {
////        preptr = ptr;
////        ptr = ptr->next;
////    }
////    preptr->next = NULL;
////    free(ptr);
////
////    return start;
////}
////
////Node* deleteAtStarting(Node *start)
////{
////    Node *ptr = start;
////    start = start->next;
////    free(ptr);
////
////    return start;
////}
////
////Node* deleteNodeAfterElement(Node *start,int after)
////{
////
////    return start;
////}
////
////Node* deleteNodeBeforeElement(Node *start, int before)
////{
////    return start;
////
////}
////
////
////void printLinkedList(LinkedList *start)
////{
////    cout<<"Linked List is: ";
////    Node *ptr;
////    ptr = start;
////    while(ptr!=NULL) {
////        cout << ptr->data<<" ";
////        ptr = ptr->next;
////    }
////}
////
////void printReverseLinkedList(LinkedList *start)
////{
////    cout<<"Linked List is: ";
////    Node *ptr;
////    ptr = start;
////    while(ptr->next!=NULL) {
////        ptr = ptr->next;
////    }
////
////    while(ptr!= NULL)
////    {
////        cout << ptr->data<<" ";
////        ptr = ptr->prev;
////    }
////}
//
//


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int d) {
        data = d;next = NULL;
    }
};
typedef struct Node Node;

Node* insertLinkedList(Node *start, int data)
{
    if(start == NULL)
        return new Node(data);
    else
    {
        Node *ptr = start;
        while(ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = new Node(data);
    }
    return start;
}

void printLinkedList(Node *start)
{
    Node *ptr = start;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

Node* MergeSorted(Node *a, Node *b)
{
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;
    Node *result;
    if(a->data <= b->data)
    {
        result = a;
        result->next = MergeSorted(a->next,b);
    }
    else
    {
        result = b;
        result->next = MergeSorted(a,b->next);
    }
    cout<<"Result: "; printLinkedList(result);
    return result;
}

void SplitList(Node* source,
               Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->next;

    /* Advance 'fast' two nodes, and advance 'slow' one node */
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    /* 'slow' is before the midpoint in the list, so split it in two
    at that point. */
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}
void mergeSort(Node **head_ref)
{
    Node *head = *head_ref;
    Node *a, *b;
    if(head == NULL || head->next == NULL)
        return;

    SplitList(head,&a, &b);
    cout<<"A: "; printLinkedList(a);
    cout<<"B: "; printLinkedList(b);

    mergeSort(&a);
    mergeSort(&b);

    *head_ref = MergeSorted(a,b);
}
int main()
{
    Node *start = NULL;
    start = insertLinkedList(start,50);
    start = insertLinkedList(start,12);
    start = insertLinkedList(start,72);
    start = insertLinkedList(start,38);
    start = insertLinkedList(start,11);
    start = insertLinkedList(start,45);

    cout<<"Before Sort: ";
    printLinkedList(start);

    mergeSort(&start);

    cout<<"After Sort: ";
    printLinkedList(start);

}

