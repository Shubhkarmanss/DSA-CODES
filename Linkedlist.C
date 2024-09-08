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

//         while (current != nullptr && count < k) {  //current !=nullptr is for last case
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

//  REMOVE DUPLICATE node in sorted linked list


// Node * removeDuplicates(Node *head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     Node *curr=head;

//     while(curr!=NULL ||curr->next!=NULL)
//     {
//         if(curr->data==curr->next->data){

//             Node*next_next=curr->next->next;
//             Node*nodetodelete=curr->next;
//             delete (nodetodelete);
//             curr->next=next_next;
//         }
        
        
//          else {
//             curr = curr->next;
//         }
//     }
//     return head;
// }

// LEETCODE 234. Palindrome Linked List

// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

// FIND IF PALINDROME EXIST IN LINKED LIST


// class Solution {
// public:
//     ListNode* findmiddle(ListNode* head) {
//         if (head == NULL || head->next == NULL) {
//             return head;
//         }
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow; // slow is now at the middle of the list
//     }

//     bool isPalindrome(ListNode* head) 
//     { 
//         if (head == NULL || head->next == NULL) {
//             return true;
//         }

//         // Find the middle of the list
//         ListNode* middle = findmiddle(head);

//         // Reverse the second half of the list
//         ListNode* current = middle;
//         ListNode* previous = NULL;
//         ListNode* temp = NULL;

//         while (current != NULL) {
//             temp = current->next;
//             current->next = previous;
//             previous = current;
//             current = temp;
//         }
//         // Now 'previous' is the head of the reversed second half

//         // Compare the first and second half
//         while (previous != NULL) {
//             if (head->val != previous->val) {
//                 return false;
//             }
//             head = head->next;
//             previous = previous->next;
//         }

//         return true;
//     }
// };

// LEETCODE 2. Add Two Numbers
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

// ADD TWO NUMBER IN A LINKED LIST

// class Solution {
// public:
//     // Function to reverse a linked list
//     ListNode* reverse(ListNode* head) {
//         ListNode* temp = NULL;     // Temporary pointer to store the next node
//         ListNode* curr = head;     // Pointer to iterate through the list
//         ListNode* prev = NULL;     // Pointer to store the previous node

//         // Iterate through the list and reverse the links
//         while (curr != NULL) {
//             temp = curr->next;     // Store the next node
//             curr->next = prev;     // Reverse the current node's link
//             prev = curr;           // Move prev and curr one step forward
//             curr = temp;
//         }
//         return prev;               // prev will be the new head of the reversed list
//     }

//     // Function to insert a value at the end of the answer list
//     void insertattail(ListNode*& anshead, ListNode*& anstail, int val) {
//         ListNode* temp = new ListNode(val); // Create a new node with the given value
//         if (anshead == NULL) {
//             // If the answer list is empty, initialize both head and tail
//             anshead = temp;
//             anstail = temp;
//         } else {
//             // Otherwise, add the new node to the end of the list
//             anstail->next = temp;
//             anstail = temp;
//         }
//     }

//     // Function to add two reversed linked lists
//     ListNode* add(ListNode* head1, ListNode* head2) {
//         int carry = 0;               // Initialize carry to 0
//         ListNode* anshead = NULL;    // Head of the answer list
//         ListNode* anstail = NULL;    // Tail of the answer list

//         // Loop through both lists until all digits and carry are processed
//         while (head1 != NULL || head2 != NULL || carry != 0) {
//             int val1 = 0;
//             if (head1 != NULL) {
//                 val1 = head1->val;    // Get value from the first list
//             }
//             int val2 = 0;
//             if (head2 != NULL) {
//                 val2 = head2->val;    // Get value from the second list
//             }
//             int sum = carry + val1 + val2;  // Calculate the sum
//             int digit = sum % 10;           // Get the last digit of the sum

//             // Insert the digit into the answer list
//             insertattail(anshead, anstail, digit);
//             carry = sum / 10;              // Calculate new carry

//             // Move to the next nodes in the lists
//             if (head1 != NULL) {
//                 head1 = head1->next;
//             }
//             if (head2 != NULL) {
//                 head2 = head2->next;
//             }
//         }

//         return anshead;  // Return the head of the answer list
//     }

//     // Main function to add two numbers represented by linked lists
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         if (l1 == NULL) {
//             return l2;  // If the first list is empty, return the second list
//         }
//         if (l2 == NULL) {
//             return l1;  // If the second list is empty, return the first list
//         }

//         // Reverse both lists to make addition easier
//         ListNode* head1 = reverse(l1);
//         ListNode* head2 = reverse(l2);

//         // Add the two reversed lists
//         ListNode* ans = add(head1, head2);

//         // Reverse the result to get the final answer
//         ans = reverse(ans);
//         return ans;
//     }
// };




// LEETCODE 148. Sort List
// Given the head of a linked list, return the list after sorting it in ascending order.

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
//     ListNode* merge(ListNode* left, ListNode* right) {
//         if (left == NULL) {
//             return right;
//         }
//         if (right == NULL) {
//             return left;
//         }

//         ListNode* ans = new ListNode(-1); // Dummy node to simplify the merge process
//         ListNode* temp = ans;

//         // Merge two sorted lists
//         while (left != NULL && right != NULL) {
//             if (left->val < right->val) {
//                 temp->next = left;
//                 left = left->next;
//             } else {
//                 temp->next = right;
//                 right = right->next;
//             }
//             temp = temp->next;
//         }

//         // Attach the remaining part of the list
//         if (left != NULL) {
//             temp->next = left;
//         } else {
//             temp->next = right;
//         }

//         // Store the head of the merged list
//         ListNode* mergedHead = ans->next;

//         // Clean up the dummy node
//         delete ans;

//         return mergedHead;
//     }

//     ListNode* findmid(ListNode* head) {
//         if (head == NULL || head->next == NULL) {
//             return head;
//         }

//         ListNode* slow = head;
//         ListNode* fast = head->next;

//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         return slow;
//     }

//     ListNode* sortList(ListNode* head) {
//         if (head == NULL || head->next == NULL) {
//             return head;
//         }

//         // Find the middle of the list
//         ListNode* mid = findmid(head);

//         // Split the list into two halves
//         ListNode* left = head;
//         ListNode* right = mid->next;
//         mid->next = NULL;

//         // Recursively sort both halves
//         left = sortList(left);
//         right = sortList(right);

//         // Merge the sorted halves
//         return merge(left, right);
//     }
// };
