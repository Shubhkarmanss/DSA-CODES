//4. FILE INDEX

// Q1. Binary Search Algorithm Code to find a number

// Q2. tell the start and end of the key in array
//  like 0112234444567  so 4 starts at 6 and ends at 9
//  also we can use this in futher applications like finding total no of occurrences

// Q3. Q852 LEET CODE Peak in the mountain array
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

// Q4. Finding Pivot element in array
// like array={9,10,1,3,5,7,8}
// so here pivot is 1

// Q5. Searching in Rotated sorted array
// like (24,56,2,4,6,9);
// we have 2 increasing functions &we need to find key in our array

// Q6. Finding square root of a non negative number
// use long long int in place of int as on multiplying mid we can go out of range so use long long int

// Q7. BOOK ALLOCATION PROBLEM
// VERY IMPORTANT QUESTION

// Q8. Aggressive Cow problem


// START

// Q1. Binary Search Algorithm Code to find a number

// #include <iostream>
// using namespace std;

// int binarysearch(int array[], int size, int key)
// {
//     int left = 0;
//     int right = size - 1;
//     int mid = left + (right - left) / 2;
//     while (left <= right)
//     {
//         if (array[mid] == key)
//         {
//             return mid;
//         }
//         else if (array[mid] < key)
//         {
//             left = mid + 1; // to search in right part now
//         }
//         else
//         {
//             right = mid - 1; // to search in left part now
//         }
//         mid = left + (right - left) / 2;
//     }
//     return -1;
// }

// int main()
// {
//     int evenarray[10] = {2, 4, 5, 7, 8, 9, 23, 45, 4567, 6788};
//     int oddarray[11] = {2, 4, 5, 7, 8, 9, 23, 45, 4567, 6788, 99999};
//     int key = 45;
//     int place = binarysearch(oddarray, 11, key);
//     cout << "Found at " << place;
// }

// Q2. tell the start and end of the key in array
//  like 0112234444567  so 4 starts at 6 and ends at 9

// #include <iostream>
// using namespace std;

// int leftsearch(int array[], int size, int key)
// {
//     int left = 0;
//     int right = size - 1;
//     int ans = -1;
//     int mid = left + (right - left) / 2;
//     while (left <= right)
//     {
//         if (array[mid] == key)
//         {
//             ans = mid;
//             right = mid - 1;
//         }
//         else if (array[mid] < key)
//         {
//             left = mid + 1; // to search in right part now
//         }
//         else
//         {
//             right = mid - 1; // to search in left part now
//         }
//         mid = left + (right - left) / 2;
//     }
//     return ans;
// }
// int rightsearch(int array[], int size, int key)
// {
//     int left = 0;
//     int right = size - 1;
//     int mid = left + (right - left) / 2;

//     int ans = -1;
//     while (left <= right)
//     {
//         if (array[mid] == key)
//         {
//             ans = mid;
//             left = mid + 1;
//         }
//         else if (array[mid] < key)
//         {
//             left = mid + 1; // to search in right part now
//         }
//         else
//         {
//             right = mid - 1; // to search in left part now
//         }
//         mid = left + (right - left) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int evenarray[10] = {2, 4, 5, 7, 8, 8, 23, 45, 4567, 6788};
//     int oddarray[11] = {2, 7, 7, 7, 7, 7, 7, 7, 4567, 6788, 99999};
//     int key = 8;
//     int leftplace = leftsearch(evenarray, 10, key);
//     int rightplace = rightsearch(evenarray, 10, key);

//     cout << "Left place is at " << leftplace << " & right place is at" << rightplace << endl;
// }

// now futher this can also be used to find total number of occurrences like we can simply do it like
// last occurence index - first occurrence index + 1, this will give total number of ocurrences

// Q3. Q852 LEET CODE Peak in the mountain array
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int left = 0;
//         int right = arr.size() - 1;

//         while (left < right) {
//             int mid = left + (right - left) / 2;

//             if (arr[mid] < arr[mid + 1]) {
//                 left = mid + 1;
//             } else {
//                 right = mid;
//             }
//         }

//         return left; // Return the peak index
//     }
// };

// Q4. Finding Pivot element in array
// like array={9,10,1,3,5,7,8}
// so here pivot is 1

// #include <iostream>
// using namespace std;

// int pivotsearch(int array[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     int mid = left + (right - left) / 2;

//    while (left<right)
//    {
//      if(array[mid]>=array[0])
//    {
//     left=mid+1;
//    }
//    else
//    {
//     right=mid;
//    }
//    mid= left+(right-left)/2;
//    }
//    return left;
// }

// int main()
// {
//     int evenarray[10] = {45, 4567, 6788, 4, 5, 7, 8, 9, 23};
//     int oddarray[11] = { 4567, 6788, 9999,2, 4, 5, 7, 8, 9,23,234};
//     int place = pivotsearch(oddarray, 11);
//     cout << "Found at " << place;
// }

// Q5. Searching in Rotated sorted array
// like (24,56,2,4,6,9);
// we have 2 increasing functions &we need to find key in our array

// #include <iostream>
// using namespace std;

// int pivotsearch(int array[], int size)
// {
//     int left = 0;
//     int right = size - 1;
//     int mid = left + (right - left) / 2;

//     while (left < right)
//     {
//         if (array[mid] >= array[0])
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid;
//         }
//         mid = left + (right - left) / 2;
//     }
//     return left;
// }

// int binarysearch(int array[], int left, int right, int key)
// {
//     int mid = left + (right - left) / 2;
//     while (left <= right)
//     {
//         if (array[mid] == key)
//         {
//             return mid;
//         }
//         else if (array[mid] < key)
//         {
//             left = mid + 1; // to search in right part now
//         }
//         else
//         {
//             right = mid - 1; // to search in left part now
//         }
//         mid = left + (right - left) / 2;
//     }
//     return -1;
// }

// int findkeyplace(int array[], int size, int key, int pivot)
// {

//         if (array[pivot] <= key && key <= array[size - 1]) // means second line is selected
//         {
//             return  binarysearch(array, pivot, size - 1, key);

//         }
//         else
//         {
//             return  binarysearch(array, 0, pivot - 1, key);
//         }

// }

// int main()
// {
//     int evenarray[10] = {45, 4567, 6788, 4, 5, 7, 8, 9, 23};
//     int oddarray[11] = {4567, 6788, 9999, 2, 4, 5, 7, 8, 9, 23, 234};
//     int pivot = pivotsearch(oddarray, 11);
//     cout << "Pivot found at " << pivot << endl;
//     int key=234;
//     int keyplace = findkeyplace(oddarray, 11, key, pivot);
//     cout << "Key found at " << keyplace << endl;
// }

// Q6. Finding square root of a non negative number
// use long long int in place of int as on multiplying mid we can go out of range so use long long int

// #include <iostream>
// using namespace std;

// long long int squareroot(long long int number)
// {
//     long long int left = 0;
//     long long int right = number;
//     long long int mid = left + (right - left) / 2;
//     long long int ans = 0;
//     while (left <= right)
//     {
//         if (mid * mid == number)
//         {
//             ans = mid;
//             return ans;
//         }
//         if (mid * mid >= number)
//         {
//             right = mid - 1;
//         }
//         if (mid * mid <= number)
//         {
//             ans = mid;
//             left = mid + 1;
//         }
//         mid = left + (right - left) / 2;
//     }
//     return ans;
// }
// // to find more precision
// double  moreprecision(int number,long long int integer,int precision){
//     double factor=1;
//     double result = integer;
// for (int i = 0; i < precision; i++)
// {
//     factor=factor/10;
//     for (double j = result; j*j <number ; j=j+factor)
//     {
//         result=j;
//     }

// }
// return result;

// }
// int main()
// {
//     long long int number;
//     cout << "Enter the number you want to find square root of" << endl;
//     cin >> number;
//     cout << "The square root of the number is " << squareroot(number) << endl;
//     long long int integer=squareroot(number);
//     long long int precision;
//     cout<<"Enter upto how many digits precision you want"<<endl;
//     cin>>precision;
//     // we can also find for more precision
//     double answer=moreprecision(number,integer,precision);
//     cout<<"Precise answer is "<<answer<<endl;
// }

// Q7. BOOK ALLOCATION PROBLEM
// VERY IMPORTANT QUESTION

// #include <iostream>
// #include <vector>
// using namespace std;

// bool ispossible(vector<int> arr,int n,int m,int mid){
//     int studentcount=1;
//     int pagesum=0;

//     for (int  i = 0; i < n; i++)
//     {
//         if (pagesum+arr[i]<=mid)
//         {
//             pagesum=pagesum+arr[i];
//         }
//         else
//         {
//             studentcount++;
//             if (studentcount>m||arr[i]>mid)
//             {
//                 return false;
//             }
//             pagesum=arr[i];
//         }
//     }
//     return true;
// }

// int allocatebooks(vector<int> arr,int n,int m){
//     int s=0;
//     int sum=0;

//     for (int i = 0; i < n; i++)
//     {
//         sum=sum+arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid = s+(e-s)/2;

//     while (s<=e)
//     {
//         if (ispossible(arr,n,m,mid)) 
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else
//         {
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;

// }

// int main()
// {
//     vector<int> array;
//     int numberofbooks,students;
//     int page;
//     cout<<"Tell me number of books"<<endl;
//     cin>>numberofbooks;
//     cout << "Tell me number of students: ";
//     cin >> students;
//     for (int i = 0; i < numberofbooks; i++)
//     {
//         cout<<"Enter "<<i+1<<" book page"<<endl;
//         cin>>page;
//         array.push_back(page);
//     }
//     cout<<"Our answer is"<<allocatebooks(array,numberofbooks,students);
// }
// Q8. Aggressive Cow problem

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool ispossible(vector<int> &stalls, int k, int mid) {
//     int cowcount = 1;
//     int lastpos = stalls[0];
    // for (int i = 1; i < stalls.size();i++){// Start from 1 since first cow is placed at stalls[0]
//         if (stalls[i] - lastpos >= mid) {
//             cowcount++;
//             if (cowcount == k) {
//                 return true;
//             }
//             lastpos = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressivecows(vector<int> &stalls, int k) {
//     sort(stalls.begin(), stalls.end());
//     int s = 0;
//     int maxi = stalls.back();  // max position is the last element after sorting
//     int e = maxi;
//     int ans = -1;
//     int mid = s + (e - s) / 2;

//     while (s <= e) {
//         if (ispossible(stalls, k, mid)) {
//             ans = mid;
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// int main() {
//     vector<int> stalls;
//     int n, k, pos;
//     cout << "Enter the number of stalls: ";
//     cin >> n;
//     cout << "Enter the number of cows: ";
//     cin >> k;
//     for (int i = 0; i < n; i++) {
//         cout << "Enter the position of stall " << i + 1 << ": ";
//         cin >> pos;
//         stalls.push_back(pos);
//     }

//     int result = aggressivecows(stalls, k);
//     cout << "The largest minimum distance is: " << result << endl;

//     return 0;
// }


