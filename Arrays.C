// 3. FILE INDEX

// 1. find an element in an array and its place

// 2. find the element in an array and its place using functions

// 3. Finding minimum number in an array

// 4. Count the total number of zeroes and ones in an array

// 5. Reverse the array

// 6. Print first and last order in array like this
//    first, last,second,second last,third, third last

// 7. To find the unique element in array
//    the element which comes once but all others come twice

// 8. Print all the pairs in an array and their sum

// 9. Sort all zeroes and ones in an array like this
//    input = 101010101100100
//    output =000000001111111
//    using the method of counting zeroes and ones

// 10. Sort all zeroes and ones in an array like this
//     input = 101010101100100
//     output =000000001111111
//     using pointers i and j which is left and right
//     Lets keep left and right as name of pointers i and j

// 11. DUTCH NATIONAL FLAG PROBLEM
//     SORTING ZEROES ONES AND TWOS IN AN ARRAY

// 12. shift array by one place to right and bring last element at first place

// 13. shift array by two place to right and bring last two elements at first place

// 14. Count the occurences or frequency of each element in an array

// 15. finding the duplicate number, each number is repeated once but one number is repeated twice, find that.the array consistes of every number from 0 till n-1.

// 16. find all the duplicates in an array, here an element occurs once or twice in an array , find all thoses which occur twice

// 17. question 1 leetcode:Two sum
//  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//  You may assume that each input would have exactly one solution, and you may not use the same element twice.
//  You can return the answer in any order.
//  Example 1:
//  Input: nums = [2,7,11,15], target = 9
//  Output: [0,1]
//  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// 18. question 15 leetcode : 3sum
//  Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
//  Notice that the solution set must not contain duplicate triplets.
//  Example 1:
//  Input: nums = [-1,0,1,2,-1,-4]
//  Output: [[-1,-1,2],[-1,0,1]]

// 19. Merge two sorted arrays
// leetcode 88

// 20. Move zeroes to right
//  leetcode 283
//  in this we just search for non zero and swap
//  and the rest is all the zeroes to the right.
//  here it is just shifting all the non zeroes element to the left

// 21. Rotate an array
//  leetcode 189 Rotate array
//  Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
//  Example 1:
//  Input: nums = [1,2,3,4,5,6,7], k = 3
//  Output: [5,6,7,1,2,3,4]
//  Explanation:
//  rotate 1 steps to the right: [7,1,2,3,4,5,6]
//  rotate 2 steps to the right: [6,7,1,2,3,4,5]
//  rotate 3 steps to the right: [5,6,7,1,2,3,4]
//  Example 2:
//  Input: nums = [-1,-100,3,99], k = 2
//  Output: [3,99,-1,-100]
//  Explanation:
//  rotate 1 steps to the right: [99,-1,-100,3]
//  rotate 2 steps to the right: [3,99,-1,-100]

// 22. Check if array is sorted and rotated.
// leetcode 1752. Check if Array Is Sorted and Rotated
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
// There may be duplicates in the original array.
// Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
// Example 1:
// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
// Example 2:
// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.
// Example 3:
// Input: nums = [1,2,3]
// Output: true
// Explanation: [1,2,3] is the original sorted array.
// You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
// Constraints:
// 1 <= nums.length <= 100
// 1 <= nums[i] <= 100



//23. SUM of arrays

//24.  Tell the frequency of each element in an array




// 1. find an element in an array and its place

// #include<iostream>
// using namespace std;

// int main(){
//     int size=10;
//     int array[10];
//     int place=0;
//     int target=5;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter the "<< i << " element"<<endl;
//         cin>>array[i];
//     }

//     cout<<"You entered the elements "<<endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout<<array[i]<<" ";
//     }
//     bool flag=0;
//     for (int i = 0; i < size; i++)
//     {
//         if (target==array[i])
//         {
//             flag=1;
//             place=++i;
//         }

//     }
//     if (flag==1)
//     {
//         cout<<"Target was fount at "<< place<< " location"<<endl;
//     }
//     else if (flag==0)
//     {
//         cout<<"Target not found"<<endl;
//     }

//     return 0;
// }

// 2. find the element in an array and its place using functions

// #include <iostream>
// using namespace std;

// void giveelements(int array[10], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int findtarget(int array[10], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (target == array[i])
//         {
//             int place = ++i;
//             return place;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int array[10];
//     int size = 10;
//     int target = 5;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the " << i << " element" << endl;
//         cin >> array[i];
//     }
//     cout << "You entered the elements " << endl;
//     giveelements(array, 10);
//     int result = findtarget(array, size, target);
//     if (result != 0)
//     {
//         cout << "Target found at " << result;
//     }
//     else if (result == 0)
//     {
//         cout << "Target not found";
//     }
// }

// 3. Finding minimum number in an array

// #include<iostream>
// using namespace std;

// int main(){
//   int max=INT_MAX;
//   cout<<"Enter 10 elements in an array"<<endl;
//   int array[10];
//   for (int i = 0; i < 10; i++)
//   {
//     cout<<"Enter the "<<i+1<<" elements in an array"<<endl;
//     cin>>array[i];
//   }
//   cout<<"Displaying 10 elements in an array that you entered"<<endl;
//   for (int i = 0; i < 10; i++)
//   {
//     cout<<array[i]<<" ";
//   }
//   for (int i = 0; i < 10; i++)
//   {
//     if (array[i]<max)
//     {
//       max=array[i];
//     }

//   }
//   cout<<"The minimum element in our array is "<<max<<endl;
// }

// 4. Count the total number of zeroes and ones in an array

// #include <iostream>
// using namespace std;

// void giveelements(int array[10], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int countzeroes(int array[10],int size){
//     int zeroes=0;
//   for (int i = 0; i < size; i++)
//   {
//     if (array[i]==0)
//     {
//        zeroes++;
//     }

//   }
//   return zeroes;
// }

// int countones(int array[10],int size){
//     int ones=0;
//   for (int i = 0; i < size; i++)
//   {
//     if (array[i]==1)
//     {
//        ones++;
//     }

//   }
//   return ones;
// }
// int main()
// {
//     int array[10];
//     int size = 10;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter the " << i << " element" << endl;
//         cin >> array[i];
//     }
//     cout << "You entered the elements " << endl;
//     giveelements(array, size);
//     int zeroes= countzeroes(array,size);
//     int ones= countones(array,size);
//     cout<<endl;
//     cout<<"There are "<<zeroes<<" number of zeroes in the array"<<endl;
//     cout<<"There are "<<ones<<" number of ones in the array"<<endl;

// }

// 5. Reverse the array

// #include <iostream>
// using namespace std;

// void giveelements(int array[10], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void reversearray(int array[10], int size)
// {

//   for (int i = 0,j=size-1; i<=j; i++,j--)
//   {
//     int temp;
//     temp=array[i];
//     array[i]=array[j];
//     array[j]=temp;
//   }
// }
// int main()
// {
//   int array[10];
//   int size = 10;
//   for (int i = 0; i < size; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   cout << "You entered these" << endl;
//   giveelements(array, size);
//   reversearray(array, size);
//   cout<<endl;
//   cout<<"Reversing the array"<<endl;
//   giveelements(array, size);
//   return 0;
// }

// 6. Print first and last order in array like this
//  first, last,second,second last,third, third last

// #include <iostream>
// using namespace std;

// void giveelements(int array[9], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void printorder(int array[9], int size)
// {

//   for (int i = 0, j = size - 1; i <= j; i++, j--)
//   {
//     if (i != j)
//     {
//       cout << array[i] << endl;
//       cout << array[j] << endl;
//     }
//     else if (i == j)
//     {
//       cout << array[i] << endl;
//     }
//   }
// }
// int main()
// {
//   int array[9];
//   int size = 9;
//   for (int i = 0; i < size; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   cout << "You entered these" << endl;
//   giveelements(array, size);
//   cout << endl;
//   printorder(array, size);

//   return 0;
// }

// 7. To find the unique element in array
//  the element which comes once but all others come twice

// #include <iostream>
// using namespace std;

// void printarray(int array[11], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i]<<" ";
//   }
// }
// int findunique(int array[11],int size){
//   int ans=0;
//   for (int i = 0; i < size; i++)
//   {
//     ans=ans^array[i];
//   }
//   return ans;
// }
// int main()
// {
//   int array[11];
//   int size = 11;
//   cout<<"Enter 11 elements in array"<<endl;
//   for (int i = 0; i < 11; i++)
//   {
//     cout<<"Enter the "<<i+1<<" element in array"<<endl;
//     cin>>array[i];
//   }
//   printarray(array,11);
//   int ans = findunique(array,11);
//   cout<<"The unique element in our array is "<<ans<<endl;

// }

// // 8. Print all the pairs in an array and their sum

// #include <iostream>
// using namespace std;

// void printpairandsum(int array[10], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     for (int j = 0; j < size; j++)
//     {
//       cout << array[i] << " " << array[j] <<" has sum = "<<array[i]+array[j]<< endl;
//     }
//   }
//   // similarly if we want to print triplets then we can simply add one more loop
// }
// void printarray(int array[10], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// int main()
// {
//   int array[10];
//   int size = 10;
//   cout << "Enter 10 elements in array" << endl;
//   for (int i = 0; i < 10; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 10);
//   cout << "Printing all possible pairs and their sums" << endl;
//   printpairandsum(array, 10);
// }

// 9. Sort all zeroes and ones in an array like this
//  input = 101010101100100
//  output =000000001111111

// using the method of counting zeroes and ones

// #include <iostream>
// using namespace std;

// void printarray(int array[20], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void sortarray(int array[20], int size)
// {
//   int zero=0;
//   int one=0;
//   for (int i = 0; i < size; i++)
//   {
//     if (array[i]==0)
//     {
//       zero++;
//     }

//     if (array[i]==1)
//     {
//       one++;
//     }

//   }
//   int i=0;
//   while(zero--){
//     array[i]=0;
//     i++;
//   }
//   while(one--){
//     array[i]=1;
//     i++;
//   }
// }
// int main()
// {
//   int array[20];
//   int size = 20;
//   cout << "Enter 20 elements in array" << endl;
//   for (int i = 0; i < 20; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 20);
//   sortarray(array, 20);
//   cout<<endl;
//   printarray(array, 20);
// }

// 10. Sort all zeroes and ones in an array like this
//  input = 101010101100100
//  output =000000001111111

// using pointers i and j which is left and right
// Lets keep left and right as name of pointers i and j

// #include <iostream>
// using namespace std;

// void printarray(int array[20], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void sortarray(int array[20], int size)
// {
//   int left = 0;
//   int right = size - 1;
//   while (left <= right)
//   {
//     if (array[left] == 0)
//     {
//       left++;
//     }
//     else if (array[right] == 1)
//     {
//       right--;
//     }
//     else if (array[left] == 1 && array[right] == 0)
//     {
//       int temp=array[left];
//       array[left]=array[right];
//       array[right]=temp;
//       left++;
//       right--;
//     }
//   }
// }
// int main()
// {
//   int array[20];
//   int size = 20;
//   cout << "Enter 20 elements in array" << endl;
//   for (int i = 0; i < 20; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 20);
//   sortarray(array, 20);
//   cout << endl;
//   printarray(array, 20);
// }

// 11. DUTCH NATIONAL FLAG PROBLEM
//  SORTING ZEROES ONES AND TWOS IN AN ARRAY

// #include <iostream>
// using namespace std;

// void printarray(int array[20], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void sortarray(int array[20], int size)
// {
//   int left = 0;
//   int mid = 0;
//   int temp = 0;
//   int right = size - 1;
//   while (mid <= right)
//   {

//     switch (array[mid])
//     {
//     case 0:
//       temp = array[left];
//       array[left] = array[mid];
//       array[mid] = temp;
//       left++;
//       mid++;
//       break;
//     case 1:
//       mid++;
//       break;
//     case 2:
//       temp = array[right];
//       array[right] = array[mid];
//       array[mid] = temp;
//       right--;
//       break;

//     default:
//       break;
//     }
//   }
// }
// int main()
// {
//   int array[20];
//   int size = 20;
//   cout << "Enter 20 elements in array" << endl;
//   for (int i = 0; i < 20; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 20);
//   sortarray(array, 20);
//   cout << endl;
//   printarray(array, 20);
// }

// 12. shift array by one place to right and bring last element at first place

// #include <iostream>
// using namespace std;

// void printarray(int array[10], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void shiftarray(int array[10], int size)
// {
//   int temp = array[size - 1];
//   for (int i = size - 1; i > 0; i--)
//   {
//     array[i] = array[i - 1];
//   }
//   array[0] = temp;
// }
// int main()
// {
//   int array[10];
//   int size = 10;
//   cout << "Enter 10 elements in array" << endl;
//   for (int i = 0; i < 10; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 10);
//   shiftarray(array, 10);
//   cout << endl;
//   printarray(array, 10);
// }

// 13. shift array by two place to right and bring last two elements at first place

// #include <iostream>
// using namespace std;

// void printarray(int array[10], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     cout << array[i] << " ";
//   }
// }
// void shiftarray(int array[10], int size)
// {
//   int temp1 = array[size - 1];
//     int temp2 = array[size - 2];

//   for (int i = size - 1; i > 1; i--)
//   {
//     array[i] = array[i - 2];
//   }
//   array[1] = temp1;
//     array[0] = temp2;

// }
// int main()
// {
//   int array[10];
//   int size = 10;
//   cout << "Enter 10 elements in array" << endl;
//   for (int i = 0; i < 10; i++)
//   {
//     cout << "Enter the " << i + 1 << " element in array" << endl;
//     cin >> array[i];
//   }
//   printarray(array, 10);
//   shiftarray(array, 10);
//   cout << endl;
//   printarray(array, 10);
// }

// 14. Count the occurences or frequency of each element in an array

//  More good question to count the elements id at question 24

// #include <iostream>
// using namespace std;

// void countoccurences(int array[10])
// {
//     int freq[1001] = {0};
//     for (int i = 0; i < 10; i++)
//     {
//         freq[array[i]]++;
//     }
//     for (int i = 0; i <= 1000; i++)
//     {
//         if (freq[i] > 0)
//         {
//             cout << "The number " << i << " is repeated " << freq[i] << " times" << endl;
//         }
//     }
// }

// int main()
// {
//     int array[10];
//     cout << "Enter the value of element in array upto 1000" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in an array" << endl;
//         cin >> array[i];
//     }
//     countoccurences(array);

//     return 0;
// }

// 15. finding the duplicate number, each number is repeated once but one number is repeated twice, find that.The array consistes of every number from 0 till n-1.
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int array[10];
//     int answer = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in an array" << endl;
//         cin >> array[i];
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         answer = answer ^ array[i];
//     }
//     for (int i = 0; i < 9; i++)
//     {
//         answer = answer ^ i;
//     }
//     cout << "The  dublicate number is " << answer << endl;
// }

// 16. find all the duplicates in an array, here an element occurs once or twice in an array , find all thoses which occur twice

// #include <iostream>
// using namespace std;

// void countoccurences(int array[], int freq[])
// {
//     for (int i = 0; i < 10; i++)
//     {
//         freq[array[i]]++;
//     }
//     for (int i = 0; i <= 1000; i++)
//     {
//         if (freq[i] > 0)
//         {
//             cout << "The number " << i << " is repeated " << freq[i] << " times" << endl;
//         }
//     }
// }
// void givedoubleelement(int freq[])
// {
//     for (int i = 0; i <= 1000; i++)
//     {
//         if (freq[i] == 2)
//         {
//             cout << "The number is " << i << endl;
//         }
//     }
// }
// int main()
// {
//     int array[10];
//     int freq[1001] = {0};

//     cout << "Enter the value of element in array upto 1000" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in an array" << endl;
//         cin >> array[i];
//     }
//     countoccurences(array, freq);
//     givedoubleelement(freq);
//     return 0;
// }

// 17. question 1 leetcode:Two sum
//  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//  You may assume that each input would have exactly one solution, and you may not use the same element twice.
//  You can return the answer in any order.
//  Example 1:
//  Input: nums = [2,7,11,15], target = 9
//  Output: [0,1]
//  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> answer;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     answer.push_back(nums[i]);
//                     answer.push_back(nums[j]);

//                 }
//             }
//         }
//         return answer;
//     }
// };

// if you want to just give the index then do this

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         vector<int> answer;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 if (nums[i] + nums[j] == target)
//                 {
//                     answer.push_back(i);
//                     answer.push_back(j);
//                 }
//             }
//         }
//         return answer;
//     }

    // this is also a correct code generated from chat gpt

    // class Solution
    // {
    // public:
    //     vector<int> twoSum(vector<int> &nums, int target)
    //     {
    //         vector<pair<int, int>> numsWithIndex;
    //         for (int i = 0; i < nums.size(); i++)
    //         {
    //             numsWithIndex.push_back({nums[i], i});
    //         }
    //         sort(numsWithIndex.begin(), numsWithIndex.end());
    //         int left = 0, right = nums.size() - 1;
    //         while (left < right)
    //         {
    //             int sum = numsWithIndex[left].first + numsWithIndex[right].first;
    //             if (sum == target)
    //             {
    //                 return {numsWithIndex[left].second, numsWithIndex[right].second};
    //             }
    //             else if (sum < target)
    //             {
    //                 left++;
    //             }
    //             else
    //             {
    //                 right--;
    //             }
    //         }
    //         return {}; // No solution found!
    //     }
    // };

    // 18. question 15 leetcode : 3sum
    //  Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
    //  Notice that the solution set must not contain duplicate triplets.
    //  Example 1:
    //  Input: nums = [-1,0,1,2,-1,-4]
    //  Output: [[-1,-1,2],[-1,0,1]]

    // class Solution
    // {
    // public:
    //     vector<vector<int>> threeSum(vector<int> &nums)
    //     {
    //         sort(nums.begin(), nums.end());
    //         vector<vector<int>> answer;

    //         for (int left = 0; left < nums.size(); left++)
    //         {
    //             if (left > 0 && nums[left] == nums[left - 1])
    //                 continue; // Skip duplicate elements for 'left'

    //             int mid = left + 1;
    //             int right = nums.size() - 1;

    //             while (mid < right)
    //             {
    //                 int sum = nums[left] + nums[mid] + nums[right];

    //                 if (sum < 0)
    //                 {
    //                     mid++;
    //                 }
    //                 else if (sum > 0)
    //                 {
    //                     right--;
    //                 }
    //                 else
    //                 {
    //                     vector<int> triplet = {nums[left], nums[mid], nums[right]};
    //                     answer.push_back(triplet);
    //                     while (mid < right && nums[mid] == nums[mid + 1])
    //                         mid++; // Skip duplicate elements for 'mid'
    //                     while (mid < right && nums[right] == nums[right - 1])
    //                         right--; // Skip duplicate elements for 'right'
    //                     mid++;
    //                     right--;
    //                 }
    //             }
    //         }
    //         return answer;
    //     }
    // };

    // 19. Merge two sorted arrays
    // leetcode 88

    // #include <iostream>
    // #include <vector>
    // using namespace std;

    // void mergearrays(const vector<int>& array1, const vector<int>& array2) {
    //     int i = 0;
    //     int j = 0;
    //     vector<int> array3;

    //     while (i < array1.size() && j < array2.size()) {
    //         if (array1[i] < array2[j]) {
    //             array3.push_back(array1[i]);
    //             i++;
    //         } else if (array1[i] > array2[j]) {
    //             array3.push_back(array2[j]);
    //             j++;
    //         } else {
    //             array3.push_back(array1[i]);
    //             array3.push_back(array2[j]);
    //             i++;
    //             j++;
    //         }
    //     }

    //     while (i < array1.size()) {
    //         array3.push_back(array1[i]);
    //         i++;
    //     }

    //     while (j < array2.size()) {
    //         array3.push_back(array2[j]);
    //         j++;
    //     }

    //     for (int k = 0; k < array3.size(); k++) {
    //         cout << array3[k] << " ";
    //     }
    //     cout << endl;
    // }

    // int main() {
    //     vector<int> array1;
    //     vector<int> array2;
    //     int size1, size2, element;

    //     cout << "Enter the size of array1: ";
    //     cin >> size1;
    //     cout << "Enter the size of array2: ";
    //     cin >> size2;

    //     for (int i = 0; i < size1; i++) {
    //         cout << "Enter the " << i + 1 << " element in array1: ";
    //         cin >> element;
    //         array1.push_back(element);
    //     }

    //     for (int i = 0; i < size2; i++) {
    //         cout << "Enter the " << i + 1 << " element in array2: ";
    //         cin >> element;
    //         array2.push_back(element);
    //     }

    //     cout << "Now after merging two arrays we get: ";
    //     mergearrays(array1, array2);

    //     return 0;
    // }

    // 20. Move zeroes to right
    //  leetcode 283
    //  in this we just search for non zero and swap
    //  and the rest is all the zeroes to the right.
    //  here it is just shifting all the non zeroes element to the left

    // class Solution {
    // public:
    //     void moveZeroes(vector<int>& nums) {
    //         int i=0;
    //         for(int j=0;j<nums.size();j++){
    //             if(nums[j]!=0){
    //                 swap(nums[i],nums[j]);
    //                 i++;
    //             }
    //         }
    //     }
    // };

    // 21. Rotate an array
    //  leetcode 189 Rotate array
    //  Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    //  Example 1:
    //  Input: nums = [1,2,3,4,5,6,7], k = 3
    //  Output: [5,6,7,1,2,3,4]
    //  Explanation:
    //  rotate 1 steps to the right: [7,1,2,3,4,5,6]
    //  rotate 2 steps to the right: [6,7,1,2,3,4,5]
    //  rotate 3 steps to the right: [5,6,7,1,2,3,4]
    //  Example 2:
    //  Input: nums = [-1,-100,3,99], k = 2
    //  Output: [3,99,-1,-100]
    //  Explanation:
    //  rotate 1 steps to the right: [99,-1,-100,3]
    //  rotate 2 steps to the right: [3,99,-1,-100]

    // class Solution {
    // public:
    //     void rotate(vector<int>& nums, int k) {
    //         vector<int> temp(nums.size());
    //         for(int i=0;i<nums.size();i++){
    //             temp[(i+k)%nums.size()]=nums[i];
    //         }
    //         nums=temp;
    //     }
    // };

    // 22. Check if array is sorted and rotated.
    // leetcode 1752. Check if Array Is Sorted and Rotated
    // Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
    // There may be duplicates in the original array.
    // Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
    // Example 1:
    // Input: nums = [3,4,5,1,2]
    // Output: true
    // Explanation: [1,2,3,4,5] is the original sorted array.
    // You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
    // Example 2:
    // Input: nums = [2,1,3,4]
    // Output: false
    // Explanation: There is no sorted array once rotated that can make nums.
    // Example 3:
    // Input: nums = [1,2,3]
    // Output: true
    // Explanation: [1,2,3] is the original sorted array.
    // You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
    // Constraints:
    // 1 <= nums.length <= 100
    // 1 <= nums[i] <= 100

    // class Solution {
    // public:
    //     bool check(vector<int>& nums) {
    //         int count=0;
    //         for(int i=1;i<nums.size();i++){
    //             if(nums[i-1]>nums[i]){
    //                 count++;
    //             }

    //         }
    //         if(nums[nums.size()-1]>nums[0]){
    //             count++;
    //         }
    //         return count<=1;
    //     }
    // };

    //23. SUM of arrays

    // #include <iostream>
    // #include <vector>
    // using namespace std;

    // void print(vector<int>ans){
    //      for (int  i = 0; i < ans.size(); i++)
    //     {
    //         cout<<ans[i]<<" ";
    //     }
    // }
    // void reverse(vector<int>ans){
    //     int i=0;
    //     int j=ans.size()-1;
    // while (i<=j)
    // {
    //     swap(ans[i],ans[j]);
    //     i++;
    //     j--;

    // }
    // print(ans);

    // }
    // int main()
    // {
    //     int length1, length2, element;
    //     vector<int> array1;
    //     vector<int> array2;
    //     cout << "Enter the length of first array" << endl;
    //     cin >> length1;
    //     cout << "Enter the length of second array" << endl;
    //     cin >> length2;

    //     for (int i = 0; i < length1; i++)
    //     {
    //         cout << "Enter the " << i + 1 << " element in array1" << endl;
    //         cin >> element;
    //         array1.push_back(element);
    //     }
    //     for (int i = 0; i < length2; i++)
    //     {
    //         cout << "Enter the " << i + 1 << " element in array2" << endl;
    //         cin >> element;
    //         array2.push_back(element);
    //     }
    //     int carry = 0;
    //     vector<int> ans;
    //     int i = length1 - 1;
    //     int j = length2 - 1;
    //     while (i >= 0 && j >= 0)
    //     {
    //         int value1 = array1[i];
    //         int value2 = array2[j];

    //         int sum = value1 + value2 + carry;
    //         carry = sum / 10;
    //         sum = sum % 10;
    //         ans.push_back(sum);
    //         i--;
    //         j--;
    //     }
    //     // now case 1
    //     while (i >= 0)
    //     {
    //         int sum = array1[i] + carry;
    //         carry = sum / 10;
    //         sum = sum % 10;
    //         i--;
    //         ans.push_back(sum);
    //     }
    //     // now case 2
    //     while (j >= 0)
    //     {
    //         int sum = array2[j] + carry;
    //         carry = sum / 10;
    //         sum = sum % 10;
    //         j--;
    //         ans.push_back(sum);
    //     }
    //     // now case 3
    //     while (carry!= 0)
    //     {
    //         int sum =  carry;
    //         carry = sum / 10;
    //         sum = sum % 10;
    //         ans.push_back(sum);
    //     }
    //     print(ans);

    //     cout<<" so we do reverse"<<endl;

    //     reverse(ans);

    // }

//24.  Tell the frequency of each element in an array

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void findFrequency(vector<int>& arr) {
//     // Sort the array
//     sort(arr.begin(), arr.end());

//     int n = arr.size();

//     cout << "Element : Frequency" << endl;

//     // Iterate through the sorted array
//     for (int i = 0; i < n; ) {
//         int count = 1;

//         // Count occurrences of arr[i]
//         while (i + count < n && arr[i] == arr[i + count]) {
//             count++;
//         }

//         // Print the element and its frequency
//         cout << arr[i] << " : " << count << endl;

//         // Move to the next unique element
//         i += count;
//     }
// }

// int main() {
//     vector<int> arr = {100, 2, 3, 2, 100, 4, 1, 5, 6, 3, 2};

//     findFrequency(arr);

//     return 0;
// }