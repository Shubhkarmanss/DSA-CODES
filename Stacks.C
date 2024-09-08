// #include <iostream>
// #include <stack>

// using namespace std;

// class Stack
// {

//     // proeperties

// public:
//     int *arr;
//     int top;
//     int size;

//     //   behaviour

//     Stack(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int data)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = data;
//         }
//         else
//         {
//             cout << "Stack Overflow" << endl;
//         }
//     }

//     void pop()
//     {
//         if (top >= 0)
//         {
//             top--;
//         }
//         else
//         {
//             cout << "Stack Underflow" << endl;
//         }
//     }

//     int peek()
//     {
//         if (top >= 0 && top < size)
//         {
//             return arr[top];
//         }
//         else
//         {
//             cout << "Stack is empty" << endl;
//             return -1;
//         }
//     }

//     bool isempty()
//     {
//         if (top < 0)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {

//     Stack shubh(5);
//     shubh.push(1);
//     shubh.push(2);
//     shubh.push(3);
//     shubh.push(4);
//     shubh.push(5);
    
//     cout<<shubh.peek();
    
// }


// Q2 Design a data structure, which represents two stacks using only one array common for both stacks. The data structure should support the following operations:
// 1. You are given the size of the array.
// 2. You need to perform push and pop operations in such a way that we are able to push elements in the stack until there is some empty space available in the array.
// 3. While performing Push operations, do nothing in the situation of the overflow of the stack.


// #include <bits/stdc++.h> 
// class TwoStack {

// public:
//  int *arr;
//     int size;
//     int top1;
//     int top2;

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         this->size=s;
//         arr =new int[s];
//         top1=-1;
//         top2=s;
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         if (top2-top1>1)
//         {
//             top1++;
//             arr[top1]=num;
//         }  
//         }

//     // Push in stack 2.
//     void push2(int num) {
//         if (top2-top1>1)
//         {
//             top2--;
//             arr[top2]=num;
//         } 
//     }
//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         if(top1>=0){
//             int ans =arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             return -1;
//         } 
//         }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//  if(top2<size){
//             int ans= arr[top2];
//             top2++;
//             return ans;
//         }
//         else{
// return -1;
//         }  
//     }
// };
