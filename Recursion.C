// Q1. LEETCODE 509 Fibonacci series

// Q2.(CODE360) Count Ways To Reach The N-th Stairs

// Q3. Speak the number
// like inout - 436
// output - four three six

// Q4. Check is the array sorted or not with recursion

// Q5. Return the sum of array using recursion

//Q6. Find key in an array. earlier we search an array linearly using for loop now find the element using recursion.

// Q7. Binary search using Recursion.

// Q8. Reverse the string using recursion

// Q9. Check palindrome

// Q10. Number to the power


// Q1. LEETCODE 509 Fibonacci series
//  #include<iostream>
//  using namespace std;

// int fibonacci(int num){
// if (num==0)
// {
//     return 0 ;
// }
// if (num==1)
// {
//     return 1 ;
// }
// int answer = fibonacci(num-1)+fibonacci(num-2);
// return answer;
// }
// int main(){
//     int num;
//     cout<<"Enter the number for fibonacci series"<<endl;
//     cin>>num;
//     cout<<fibonacci(num);
//     return 0;
// }

// Q2.(CODE360) Count Ways To Reach The N-th Stairs
// Problem statement
// You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair.
// Each time, you can climb either one step or two steps.
// You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

// #include <bits/stdc++.h>
// int countDistinctWays(int nStairs) {
//     if(nStairs<0) return 0;
//     if(nStairs==0) return 1;
//     return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
// }


// Q3. Speak the number
// like inout - 436
// output - four three six


// #include<iostream>
// using namespace std;
// void speak(int number,string array[]){
//     if (number==0)
//     {
//         return;
//     }
    
//     int last=number%10;
//     number=number/10;
//     speak(number,array);
//     cout<<array[last]<<" ";
    
    
// }
// int main(){
//     int number;
//     cout<<"Enter the number"<<endl;
//     cin>>number;
//     string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     speak(number,array);
//     return 0;
// }

// Q4. Check is the array sorted or not with recursion

// #include <iostream>
// using namespace std;
// bool checksort(int array[], int size)
// {

//     if (size == 0 || size == 1)
//     {
//         return 1;
//     }
//     if (array[0] > array[1])
//     {
//         return 0;
//     }

//     return checksort(array+1,size-1);
// }
// int main()
// {
//     int array[5] = {2, 4, 7, 9, 78};
//     int size = sizeof(array) / sizeof(array[0]);
//     bool answer = checksort(array, size);
//     if (answer == 0)
//     {
//         cout << "Not Sorted" << endl;
//     }
//     if (answer == 1)
//     {
//         cout << "Sorted" << endl;
//     }
// }


// Q5. Return the sum of array using recursion

// #include <iostream>
// using namespace std;
// int givesum(int array[], int size)
// {

//     if (size==0)
//     {
//         return 0;
//     }
    
    
//     int sum = array[0]+givesum(array+1,size-1);
//     return sum;
// }
// int main()
// {
//     int array[5] = {2, 4, 7, 9, 78};
//     int size = sizeof(array) / sizeof(array[0]);
//     int answer = givesum(array, size);
//     cout<<answer;
// }

//Q6. Find key in an array. earlier we search an array linearly using for loop now find the element using recursion.

// #include <iostream>
// using namespace std;
// bool checkpresent(int array[], int size,int key)
// {

//     if (size==0)
//     {
//         return 0;
//     }
//     if (array[0]==key)
//     {
//         return 1;
//     }
//     int ans=checkpresent( array+1, size-1, key);
    
//     return ans;
// }
// int main()
// {
//     int array[5] = {2, 4, 7, 9, 78};
//     int key=7;
//     int size = sizeof(array) / sizeof(array[0]);
//     bool answer = checkpresent(array, size,key);
//     if (answer == 0)
//     {
//         cout << "Not Present" << endl;
//     }
//     if (answer == 1)
//     {
//         cout << "Present" << endl;
//     }
// }

// Q7. Binary search using Recursion.


// #include <iostream>
// using namespace std;


// //this function to show what happens at each step. 
// void print(int array[],int s,int e){
// for (int i = s; i <= e; i++)
// {
//     cout<<array[i]<<" ";
// }
// cout<<endl;

// }


// int binarysearch(int array[], int s,int e,int key)
// {
//     print(array,s,e);
//     if (s>e)
//     {
//         return 0;
//     }
//     int mid=s+(e-s)/2;
//     if (array[mid]==key)
//     {
//         return mid;
//     }
    
//     if (array[mid]<key)
//     {
//         return binarysearch(array,mid+1,e,key);
//     }
//     else
//     { 
    
//         return binarysearch(array,s,mid-1,key);
//     }
    
    
// };
// int main()
// {
//     int array[8] = {2, 4,5,6, 7,8, 9, 78,};
//     int key=8;
//     int size = sizeof(array) / sizeof(array[0]);
//     int s=0;
//     int e=size-1;
//     cout<<"Present or not"<<endl;
//     int answer = binarysearch(array, s,e,key);
//     if (answer == 0)
//     {
//         cout << "Not Present" << endl;
//     }
//     if (answer)
//     {
//         cout << "Present at "<<answer << endl;
//     }
// }


// Q8. Reverse the string using recursion

// #include <iostream>
// using namespace std;


// void reverse(string &name, int s,int e)
// {
//     cout<<" working on "<<name<<endl;
//     if (s>e)
//     {
//         return;
//     }
//     swap(name[s],name[e]);
//     reverse(name,s+1,e-1);
    
// };
// int main()
// {
//     string name="shubhkarman";
//     cout<<name<<endl;
//     int s=0;
//     int e=name.size()-1;
//     reverse(name,s,e);
//     cout<<"Final result "<<name<<endl;

// }

// Q9. Check palindrome

// #include <iostream>
// using namespace std;


// bool checkpalindrome(string &name, int s,int e)
// {
    
//     if (s>e)
//     {
//         return 1;
//     }
//     if (name[s]!=name[e])
//     {
//         return 0;
//     }
    
//     return checkpalindrome(name,s+1,e-1);
    
// };
// int main()
// {
//     string name="non";
//     int s=0;
//     int e=name.size()-1;
//     bool answer=checkpalindrome(name,s,e);
//     if (answer==0)
//     {
//         cout<<"Its not A plaindrome"<<endl;
//     }
//      if (answer==1)
//     {
//         cout<<"Its A plaindrome"<<endl;
//     }
    

// }


// Q10. Number to the power

// #include <iostream>
// using namespace std;


// int find(int number,int power)
// {
//     if (power==0)
//     {
//         return 1;
//     }
//     if (power==1)
//     {
//         return number;
//     }

//     int ans=find(number,power/2);
//     if (power%2==0)
//     {
//         return ans*ans;
//     }
//     else
//     {
//         return number*ans*ans;
//     }
    
      
// };
// int main()
// {
//     int number,power;
//     cout<<"Enter the number"<<endl;
//     cin>>number;
//     cout<<"Enter the power"<<endl;
//     cin>>power;

//     cout<<find(number,power);

// }

// Q11. Bubble sort using recursion.


#include <iostream>
using namespace std;


void sort(int array[],int size)
{

    // base case
    if (size==0||size==1)
    {
        return;
    }

    // ek case solve krlo, largest element ko end me rakhdo
        for (int i = 0; i <size-1; i++)
        {
            if (array[i]>array[i+1])
            {
                swap(array[i],array[i+1]);
            }
            
        }
        // recursive call
    sort(array,size-1);
       
};
int main()
{
    int array[10]={4,2,3,56,354,24,387655,374,4,2};
    
    int size = sizeof(array) / sizeof(array[0]);
     for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    sort(array,size);
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    


}
