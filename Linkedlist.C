// #include <iostream>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     };
// };

// void insertatbegining(node *&head, int data)
// {
//     node *temp = new node(data);
//     temp->next = head;
//     head = temp;
// }
// void insertatend(node *&tail, int data)
// {
//     node *temp = new node(data);
//     tail->next = temp;
//     tail = temp;
// }
// void insertinbetween(node *&head, int index, int data)
// {
//     node *temp = new node(data);
//     node *ptr = head;
//     int i = 1;
//     while (i < index-1)
//     {
//         ptr = ptr->next;
//         i++;
//     }
//     temp->next = ptr->next;
//         ptr->next = temp;

// }
// void print(node *&head)
// {
//     node *ptr = head;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << " ";
//         ptr = ptr->next;
//     }
//     cout<<endl;
// }
// main()
// {
//     node *node1 = new node(5);
//     node *node2 = new node(10);
//     node *node3 = new node(15);

//     node *head = node1;
//     node *tail = node3;
//     // connecting them
//     node1->next = node2;
//     node2->next = node3;

//     print(head);
//     insertatbegining(head, 2);
//     print(head);
//     insertatend(tail,20);
//     print(head);
//     insertinbetween(head,3,50);
//     print(head);

// }

// DOUBLY LINKED LIST

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     //constructor
//     Node(int d ) {
//         this-> data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }

//     ~Node() {
//         int val = this -> data;
//         if(next != NULL) {
//             delete next;
//             next = NULL;
//         }
//         cout << "memory free for node with data "<< val << endl;
//     }
// };

// //traversing a linked list
// void print(Node* head) {
//     Node* temp  = head ;

//     while(temp != NULL) {
//         cout << temp -> data << " ";
//         temp  = temp -> next;
//     }
//     cout << endl;
// }

// //gives length of Linked List
// int getLength(Node* head) {
//     int len = 0;
//     Node* temp  = head ;

//     while(temp != NULL) {
//         len++;
//         temp  = temp -> next;
//     }

//     return len;
// }
// void insertAtHead(Node* &tail, Node* &head, int d) {

//     //empty list
//     if(head == NULL) {
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }

// }

// void insertAtTail(Node* &tail,Node* &head, int d) {
//     if(tail == NULL) {
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         tail -> next  = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }

// }

// void insertAtPosition(Node* & tail, Node* &head, int position, int d) {

//     //insert at Start
//     if(position == 1) {
//         insertAtHead(tail,head, d);
//         return;
//     }

//     Node* temp  = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //inserting at Last Position
//     if(temp -> next == NULL) {
//         insertAtTail(tail,head,d);
//         return ;
//     }

//     //creating a node for d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert ->next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;
// }

// void deleteNode(int position, Node* & head) {

//     //deleting first or start node
//     if(position == 1) {
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp ->next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else
//     {
//         //deleting any middle node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         curr -> next = NULL;

//         delete curr;

//     }
// }

// int main() {

//     Node* head = NULL;
//     Node* tail = NULL;

//     print(head);
//     //cout << getLength(head) << endl;

//     insertAtHead(tail,head, 11);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtHead(tail,head, 13);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtHead(tail,head, 8);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtTail(tail,head, 25);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 2, 100);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 1, 101);
//     print(head);

//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 7, 102);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     deleteNode(7, head);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     return 0;
// }

// circular linked list

// #include<iostream>
// #include<map>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     //constrcutor
//     Node(int d) {
//         this->data = d;
//         this->next = NULL;
//     }

//     ~Node() {
//         int value = this->data;
//         if(this->next != NULL) {
//             delete next;
//             next = NULL;
//         }
//         cout << " memory is free for node with data " << value << endl;
//     }

// };

// void insertNode(Node* &tail, int element, int d) {

//     //empty list
//     if(tail == NULL) {
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode -> next = newNode;
//     }
//     else{
//         //non-empty list
//         //assuming that the element is present in the list

//         Node* curr = tail;

//         while(curr->data != element) {
//             curr = curr -> next;
//         }

//         //element found -> curr is representing element wala node
//         Node* temp = new Node(d);
//         temp -> next = curr -> next;
//         curr -> next = temp;

//     }

// }

// void print(Node* tail) {

//     Node* temp = tail;

//     //empty list
//     if(tail == NULL) {
//         cout << "List is Empty "<< endl;
//         return ;
//     }

//     do {
//         cout << tail -> data << " ";
//         tail = tail -> next;
//     } while(tail != temp);

//     cout << endl;
// }

// void deleteNode(Node* &tail, int value) {

//     //empty list
//     if(tail == NULL) {
//         cout << " List is empty, please check again" << endl;
//         return;
//     }
//     else{
//         //non-empty

//         //assuming that "value" is present in the Linked List
//         Node* prev = tail;
//         Node* curr = prev -> next;

//         while(curr -> data != value) {
//             prev = curr;
//             curr = curr -> next;
//         }

//         prev -> next = curr -> next;

//         //1 Node Linked List
//         if(curr == prev) {
//             tail = NULL;
//         }

//         //>=2 Node linked list
//         else if(tail == curr ) {
//             tail = prev;
//         }

//         curr -> next = NULL;
//         delete curr;

//     }

// }

// bool isCircularList(Node* head) {
//     //empty list
//     if(head == NULL) {
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp != NULL && temp != head ) {
//         temp = temp -> next;
//     }

//     if(temp == head ) {
//         return true;
//     }

//     return false;

// }

// bool detectLoop(Node* head) {

//     if(head == NULL)
//         return false;

//     map<Node*, bool> visited;

//     Node* temp = head;

//     while(temp !=NULL) {

//         //cycle is present
//         if(visited[temp] == true) {
//             return true;
//         }

//         visited[temp] = true;
//         temp = temp -> next;

//     }
//     return false;

// }

// int main() {

//     Node* tail = NULL;

//    // insertNode(tail, 5, 3);
//     //print(tail);

//   //  insertNode(tail, 3, 5);
//    // print(tail);

// /*
//     insertNode(tail, 5, 7);
//     print(tail);

//     insertNode(tail, 7, 9);
//     print(tail);

//     insertNode(tail, 5, 6);
//     print(tail);

//     insertNode(tail, 9, 10);
//     print(tail);

//     insertNode(tail, 3, 4);
//     print(tail);

//     deleteNode(tail, 5);
//     print(tail);
//      */

//     if(isCircularList(tail)) {
//         cout << " Linked List is Circular in nature" << endl;
//     }
//     else{
//         cout << "Linked List is not Circular " << endl;
//     }

//     return 0;
// }

// NOW WRITTING THE WHOLE CODE YOURSELF and CHATGPT

// Singly linked list

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node *next;

//     node(int d) {
//         this->data = d;
//         this->next = NULL;
//     }
//     ~node(){
//         int value=this->data;
//         cout<<"Memory free from node with data"<<value<<endl;
//     }
// };

// void print(node*& head, node*& tail) {
//     node *ptr = head;
//     while (ptr != NULL) {
//         cout << ptr->data << " ";
//         ptr = ptr->next;
//     }
//     cout << endl;
//     cout << "Head: " << head->data << " Tail: " << tail->data << endl;
// }

// void insertathead(node*& head, node*& tail, int data) {
//     if (head == NULL) {
//         node* temp = new node(data);
//         head = temp;
//         tail = temp;
//         return;
//     } else {
//         node *temp = new node(data);
//         temp->next = head;
//         head = temp;
//     }
// }

// void insertatlast(node*& head, node*& tail, int data) {
//     if (head == NULL) {
//         node* temp = new node(data);
//         head = temp;
//         tail = temp;
//         return;
//     }

//     node *temp = new node(data);
//     tail->next = temp;
//     temp->next = NULL;
//     tail = temp;
//     return;
// }

// void insertinbetween(node*& head, node*& tail, int index, int data) {
//     if (index == 1) {
//         insertathead(head, tail, data);
//         return;
//     }

//     node* ptr = head;
//     int count = 1;

//     while (count < index - 1 && ptr != NULL) {
//         ptr = ptr->next;
//         count++;
//     }

//     if (ptr == NULL || ptr->next == NULL) {
//         insertatlast(head, tail, data);
//     } else {
//         node* temp = new node(data);
//         temp->next = ptr->next;
//         ptr->next = temp;
//     }
// }

// void deletenode(node*& head, node*& tail, int index) {
//     if (head == NULL) {
//         cout << "List is empty, cannot delete." << endl;
//         return;
//     }

//     if (index == 1) {
//         node* temp = head;
//         head = head->next;
//         if (head == NULL) { // If the list becomes empty
//             tail = NULL;
//         }
//         temp->next = NULL;
//         delete temp;
//         return;
//     }

//     node* current = head;
//     node* previous = NULL;
//     int count = 1;

//     while (count < index && current != NULL) {
//         previous = current;
//         current = current->next;
//         count++;
//     }

//     if (current == NULL) {
//         cout << "Index out of bounds, cannot delete." << endl;
//         return;
//     }

//     previous->next = current->next;

//     if (current->next == NULL) { // If we're deleting the tail
//         tail = previous;
//     }

//     current->next = NULL;
//     delete current;
// }


// int main() {
//     node* head = NULL;
//     node* tail = NULL;

//     insertathead(head, tail, 5);
//     print(head, tail);

//     insertathead(head, tail, 0);
//     print(head, tail);

//     // insertatlast(head, tail, 50);
//     // print(head, tail);

//     // insertinbetween(head, tail, 1, -5);
//     // print(head, tail);

//     // insertinbetween(head, tail, 3, 2);
//     // print(head, tail);

//     insertinbetween(head, tail, 6, 100);
//     print(head, tail);

//     // deletenode(head,tail,40);
//     // print(head, tail);
//      deletenode(head,tail,8);
//     print(head, tail);
//     //  deletenode(head,3);
//     // print(head, tail);

//     return 0;
// }

// LEET CODE 25. Reverse Nodes in k-Group

// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // Step 1: Check if there are at least k nodes to reverse
//         ListNode* node = head;
//         for (int i = 0; i < k; i++) {
//             if (node == nullptr) {
//                 return head; // Not enough nodes left to reverse, return
//                              // original head
//             }
//             node = node->next;
//         }

//         // Step 2: Reverse first k nodes
//         ListNode* current = head;
//         ListNode* previous = nullptr;
//         ListNode* next = nullptr;
//         int count = 0;

//         while (current != nullptr && count < k) {
//             next = current->next;
//             current->next = previous;
//             previous = current;
//             current = next;
//             count++;
//         }

//         // Step 3: Recursively call the function for the next part of the list
//         if (next != nullptr) {
//             head->next = reverseKGroup(next, k);
//         }

//         // Step 4: Return the new head after reversing
//         return previous;
//     }
// };


// LLETCODE 141. Linked List Cycle Given head, the head of a linked list, determine if the linked list has a cycle in it.

// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

// Return true if there is a cycle in the linked list. Otherwise, return false.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if (head == NULL || head->next == NULL) {
//             return false;
//         }
//          ListNode* slow = head;
//         ListNode* fast = head->next;
//         while (fast != slow) {
//             if (fast->next == NULL || fast->next->next == NULL) {
//                 return false;
//             }
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return true;
//     }
    
// };