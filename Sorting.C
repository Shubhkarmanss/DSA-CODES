//        5th FILE INDEX

// 1. SELECTION SORT

// 2. Bubble Sort

// 3. Insertion Sort

// 4. MERGE SORT

// 5. QUICK SORT (VERY IMPORTANT DO CAREFULLY UNDERSTAND)

// Q6. LEETCODE 78. Subsets

// Q7. (codeforce) Subsequences of String

// Q8. (VERY IMPORTANT) 17 LEETCODE Letter Combinations of a Phone Number

// Q9.46 LEETCODE. Permutations

// Q10. (GEEKSFORGEEKS) (VERY IMPORTANT) Rat in a Maze Problem -I

// 1. SELECTION SORT

// #include <iostream>
// #include <vector>
// #include <utility> //used this or use #include<algorithm> to use inbuilt swap function
// using namespace std;

// void selectionsort(vector<int> &array, int length)
// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         int minimum = i;
//         for (int j = i + 1; j < length; j++)
//         {
//             if (array[j] < array[minimum])
//             {
//                 minimum = j;
//             }
//         }
//         swap(array[i], array[minimum]);
//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     printelements(array, length);
//     cout << "Applying Selection sort we get" << endl;
//     selectionsort(array, length);
//     printelements(array, length);

//     return 0;
// }

// 2. Bubble Sort

// #include <iostream>
// #include <vector>
// #include <utility>
// #include<algorithm>
// using namespace std;

// void Bubblesort(vector<int> &array, int length)

// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         bool swapped = false; //now here we did optimised
//         for (int j = 0; j < length - i - 1; j++)
//         {
//             if (array[j] > array[j + 1]) //here you can use > or < any, it will get sorted to largest or smallest.
//             {
//                 swap(array[j], array[j + 1]);
//                  swapped =true;
//             }
//         }
//         if (swapped==false)
//         {
//             break;
//         }

//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     cout << endl;
//     printelements(array, length);
//     cout << "Applying Bubble sort we get" << endl;
//     Bubblesort(array, length);
//     printelements(array, length);
//     return 0;
// }

// 3. Insertion Sort

// #include <iostream>
// #include <vector>
// #include <utility>
// #include<algorithm>
// using namespace std;

// void Insertionsort(vector<int> &array, int length)

// {
//     for (int i = 1; i < length; i++)
//     {
//         int temp=array[i];
//         int j = i-1;
//         for (; j >= 0; j--)
//         {
//             if (array[j] > temp)
//             {

//                 array[j+1]=array[j];

//             }
//             else
//             {
//                 break;
//             }

//         }
//         array[j+1]=temp;

//     }
// }
// void printelements(vector<int> &array, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
// int main()
// {
//     int length, element;
//     vector<int> array;
//     cout << "Enter the length of array" << endl;
//     cin >> length;
//     for (int i = 0; i < length; i++)
//     {
//         cout << "Enter the " << i + 1 << " element in array" << endl;
//         cin >> element;
//         array.push_back(element);
//     }
//     cout << endl;
//     printelements(array, length);
//     cout << "Applying Insertion sort we get" << endl;
//     Insertionsort(array, length);
//     printelements(array, length);
//     return 0;
// }

// 4. MERGE SORT

// #include <iostream>
// using namespace std;

// void merge(int array[], int s, int e) {
//     int mid = s + (e - s) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];
//     int mainindex = s;

//     // Copy values
//     for (int i = 0; i < len1; i++) {
//         first[i] = array[mainindex++];
//     }
//     mainindex = mid + 1;
//     for (int i = 0; i < len2; i++) {
//         second[i] = array[mainindex++];
//     }

//     // Now merge two sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainindex = s;

//     while (index1 < len1 && index2 < len2) {
//         if (first[index1] <= second[index2]) {
//             array[mainindex++] = first[index1++];
//         } else {
//             array[mainindex++] = second[index2++];
//         }
//     }
//     while (index1 < len1) {
//         array[mainindex++] = first[index1++];
//     }
//     while (index2 < len2) {
//         array[mainindex++] = second[index2++];
//     }

//     // Clean up
//     delete[] first;
//     delete[] second;
// }

// void mergesort(int array[], int s, int e) {
//     if (s >= e) return; // Base case: if the array has one or zero elements

//     int mid = s + (e - s) / 2;
//     // Sort left part
//     mergesort(array, s, mid);
//     // Sort right part
//     mergesort(array, mid + 1, e);
//     // Merge the sorted parts
//     merge(array, s, e);
// }

// int main() {
//     int array[6] = {1,2,5,2,3,6};
//     int size =6;

//     cout << "Original array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     mergesort(array, 0, size - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// 5. QUICK SORT (VERY IMPORTANT DO CAREFULLY UNDERSTAND)

// #include <iostream>
// using namespace std;

// int partition(int array[], int s, int e)
// {

//     int pivot = array[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (array[i] <= pivot)
//         {
//             count++;
//         }
//     }
//     // place pivot at right index
//     int pivotindex = s + count;

//     swap(array[pivotindex], array[s]);
//     int i = s;
//     int j = e;
//     while (i < pivotindex && j > pivotindex)
//     {
//         while (array[i] <= pivot)
//         {
//             i++;
//         }
//         while (array[j] > pivot)
//         {
//             j--;
//         }
//         if (i < pivotindex && j > pivotindex)
//         {
//             swap(array[i++], array[j--]);
//         }
//     }
//     return pivotindex;
// }
// void quicksort(int array[], int s, int e)
// {

//     if (s >= e)
//     {
//         return;
//     }
//     // partition karenge
//     int p = partition(array, s, e);

//     // left part sort kro
//     quicksort(array, s, p - 1);

//     // right part sort kro
//     quicksort(array, p + 1, e);
// }
// int main()
// {
//     int array[15] = {4, 654, 56, 43, 65, 5, 5, 5, 5, 2, 5, 32, 6, 2, 10};
//     int size = 15;
//     cout << "Original array: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     quicksort(array, 0, size - 1);

//     cout << "Sorted array: ";

//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// Q6. LEETCODE 78. Subsets

// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

// class Solution {

// private:
// void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>&ans){ //remember to pass ans by reference
//     // base case
//     if(index>=nums.size()){
//         ans.push_back(output);
//         return;
//     }
//     // exclude
//     solve(nums,output,index+1,ans);

//     // include
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums,output,index+1,ans);
// }

// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>output;
//         int index=0;
//         solve(nums,output,index,ans);
//         return ans;
//     }
// };

// Q7. (codeforce) Subsequences of String
// You are given a string 'STR' containing lowercase English letters from a to z inclusive. Your task is to find all non-empty possible subsequences of 'STR'.
// A Subsequence of a string is the one which is generated by deleting 0 or more letters from the string and keeping the rest of the letters in the same order.
// same as earlier question
// earlier we did with numbers and now we do with strings (its same, its easy)

// void solve(string str,string output,int index,vector<string>& ans){
// // base case
// 	if(index>=str.length()){
// 		if(output.length()>0){
//          ans.push_back(output);
// 		}

// 		return  ;
// 	}

// 	// exclude
// 	solve(str,output,index+1,ans);

// 	// include
// 	char element=str[index];
// 	output.push_back(element);
// 	solve(str,output,index+1,ans);
// }
// vector<string> subsequences(string str){

// 	vector<string> ans;
// 	string output="";
// 	int index=0;

// 	solve (str,output,index,ans);
// 	return ans;

// }

// Q8. (VERY IMPORTANT) 17 LEETCODE Letter Combinations of a Phone Number
//  Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
//  A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// class Solution {

//     private:
//     void solve(string digit,string output,int index,vector<string>&ans,string mapping[]){

//         // base case
//         if(index>=digit.length()){
//             ans.push_back(output);
//             return;
//         }

//         int number = digit[index]-'0';
//         string value=mapping[number];

//         for(int i=0;i<value.length();i++){
//             output.push_back(value[i]);
//             solve(digit,output,index+1,ans,mapping);
//             output.pop_back();
//         }
//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;

//         if(digits.length()==0)
//         return ans;

//         string output="";
//         int index=0;
//         string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//         solve (digits,output,index,ans,mapping);

//         return ans;
//     }
// };

// Q9.46 LEETCODE. Permutations

// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

// class Solution {

//     private:
//     void solve(vector<int>nums,vector<vector<int>>&ans,int index){
//         // base case
//         if(index>=nums.size()){
//             ans.push_back(nums);
//             return;
//         }
//         for(int j=index;j<nums.size();j++){
//             swap(nums[index],nums[j]);
//             solve(nums,ans,index+1);
//             // backtrack
//             swap(nums[index],nums[j]); //this is backtracking to go to previous state
//         }
//     }
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         int index=0;
//         solve(nums,ans,index);
//         return ans;
//     }
// };

// Q10. (GEEKSFORGEEKS) (VERY IMPORTANT) Rat in a Maze Problem -I
//  Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
//  Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically.
//  Input: mat[][] = [[1, 0, 0, 0],
//                   [1, 1, 0, 1],
//                   [1, 1, 0, 0],
//                   [0, 1, 1, 1]]
//  Output: DDRDRR DRDDRR
//  Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm> // for sort
// using namespace std;

// bool issafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m)
// {
//     if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
// {
//     // base case: reached the bottom-right corner
//     if (x == n - 1 && y == n - 1)
//     {
//         ans.push_back(path);
//         return;
//     }

//     // mark the current cell as visited
//     visited[x][y] = 1;

//     // 4 possible directions: D L R U

//     // down
//     int newx = x + 1;
//     int newy = y;
//     if (issafe(newx, newy, n, visited, m))
//     {
//         path.push_back('D');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     // left
//     newx = x;
//     newy = y - 1;
//     if (issafe(newx, newy, n, visited, m))
//     {
//         path.push_back('L');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     // right
//     newx = x;
//     newy = y + 1;
//     if (issafe(newx, newy, n, visited, m))
//     {
//         path.push_back('R');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     // up
//     newx = x - 1;
//     newy = y;
//     if (issafe(newx, newy, n, visited, m))
//     {
//         path.push_back('U');
//         solve(m, n, ans, newx, newy, visited, path);
//         path.pop_back();
//     }

//     // unmark the current cell for backtracking
//     visited[x][y] = 0;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<vector<int>> m(n, vector<int>(n));

//     // input the matrix
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> m[i][j];
//         }
//     }

//     vector<string> ans;

//     // If the start point is blocked, return an empty result
//     if (m[0][0] == 0)
//     {
//         cout << "No paths found." << endl;
//         return 0;
//     }

//     vector<vector<int>> visited(n, vector<int>(n, 0));

//     string path = "";
//     solve(m, n, ans, 0, 0, visited, path);

//     if (ans.empty())
//     {
//         cout << "No paths found." << endl;
//     }
//     else
//     {
//         sort(ans.begin(), ans.end());
//         for (const string &p : ans)
//         {
//             cout << p << endl;
//         }
//     }

//     return 0;
// }
