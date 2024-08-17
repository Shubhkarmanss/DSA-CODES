//1. basics and finding target element

//2. return the sum row and column wise also tell the largest row

//3. pring like a wave
// like 1 2  3  4
//      5 6  7  8
//      9 10 11 12
// output will be 1 5 9 10 6 2 3 7 11 12 8 4

//4. Leetcode 54. Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.

//5. Leetcode 48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

//6. Leetcode 74. Search a 2D Matrix
//  Binary search in 2d array
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

//7. IMPORTANT QUESTION
// 240. Search a 2D Matrix II
// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

//8. IMPORTANT 
// DYNAMIC ALLOCATION OF 2D ARRAY




//1. basics and finding target element

// #include <iostream>
// using namespace std;
// // we need to tell the number of coluumn to compiler to calculate the address
// bool isfound(int arr[][4], int target, int row, int column)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// int main()
// {
//     // create 2 d array
//     int arr[3][4];
//     cout<<"Enter the elements"<<endl;
//     //  we can add elements like this also
//     //  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     // this fills the array row wise

//     // we can also add elements like this also
//     // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

//     // taking input row wise
//     for (int i = 0; i < 3; i++) // for row
//     {
//         for (int j = 0; j < 4; j++) // for column
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // either row or column we can take input
//     // but we prefer to go with row wise
//     // taking input column wise
//     // for (int i = 0; i < 4; i++)// for column
//     // {
//     //     for (int j = 0; j < 3; j++)// for row
//     //     {
//     //         cin>>arr[i][j];
//     //     }

//     // }
//     // print
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Tell the element to search" << endl;
//     int target;
//     cin >> target;
//     if (isfound(arr, target, 3, 4))
//     {
//         cout << "Yes present" << endl;
//     }
//     else
//     {
//         cout << "Not present" << endl;
//     }
// }






//2. return the sum row and column wise also tell the largest row

// #include <iostream>
// using namespace std;
// // we need to tell the number of coluumn to compiler to calculate the address
// bool isfound(int arr[][4], int target, int row, int column)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
// void printcolumnwisesum(int arr[][4],int row,int column){
//     cout<<"Printing sum column wise"<<endl;
//      for (int j = 0; j < column; j++)
//     {
//         int sum=0;
//         for (int i = 0; i < row; i++)
//         {
//             sum+=arr[i][j];
//         }
//         cout<<"The sum of "<<j+1<<" row is "<<sum<<endl;
//     }
// }
// void printrowwisesum(int arr[][4],int row,int column){
//     int maxsum=INT_MIN;
//     int maxrow=-1;
//     cout<<"Printing sum row wise"<<endl;
//      for (int i = 0; i < row; i++)
//     {
//         int sum=0;
//         for (int j = 0; j < column; j++)
//         {
//             sum+=arr[i][j];
//         }
//         cout<<"The sum of "<<i+1<<" row is "<<sum<<endl;
//         if (sum>maxsum)
//         {
//             maxsum=sum;
//             maxrow=i;
//         }

//     }
//     cout<<"The largest row sum is "<<maxsum<<" and its of row "<<maxrow<<endl;
// }
// int main()
// {
//     // create 2 d array
//     int arr[3][4];
//     cout<<"Enter the elements"<<endl;

//     // taking input row wise
//     for (int i = 0; i < 3; i++) // for row
//     {
//         for (int j = 0; j < 4; j++) // for column
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // print
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//  printrowwisesum(arr,3,4);

//  printcolumnwisesum(arr,3,4);
// }









//3. pring like a wave
// like 1 2  3  4
//      5 6  7  8
//      9 10 11 12
// output will be 1 5 9 10 6 2 3 7 11 12 8 4


//  It has time complexity of big o (nm)
// #include <iostream>
// using namespace std;

// void printwave(int arr[][4], int row, int column)
// {

//     cout << "Printing 2d array like a wave" << endl;
//     for (int j = 0; j < column; j++)
//     {

//         if (j %2==0)
//         {
//             for (int i = 0; i < row; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//          else
//         {
//             for (int i = row-1; i >=0; i--)
//             {
//                 cout << arr[i][j] << " " ;
//             }
//         }
//     }
// }
// int main()
// {
//     // create 2 d array
//     int arr[3][4];
//     cout << "Enter the elements" << endl;

//     // taking input row wise
//     for (int i = 0; i < 3; i++) // for row
//     {
//         for (int j = 0; j < 4; j++) // for column
//         {
//             cin >> arr[i][j];
//         }
//     }
//     // print
//     cout << "The 2d array you entered" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     printwave(arr, 3, 4);
// }






//4. Leetcode 54. Spiral Matrix
// Given an m x n matrix, return all elements of the matrix in spiral order.


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {

//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int total = row * col;
//         int count = 0;

//         int startingrow = 0;
//         int startingcol = 0;
//         int endingcol = col - 1;
//         int endingrow = row - 1;

//         while (count < total) {

//             // print starting row;
//             for (int i = startingcol;count < total&& i <= endingcol; i++) {
//                 ans.push_back(matrix[startingrow][i]);
//                 count++;
//             }
//             startingrow++;

//             // print ending column

//             for (int i = startingrow; count < total&&i <= endingrow; i++) {
//                 ans.push_back(matrix[i][endingcol]);
//                 count++;
//             }
//             endingcol--;

//             // print ending row
//             for (int i = endingcol;count < total&& i >= startingcol; i--) {
//                 ans.push_back(matrix[endingrow][i]);
//                 count++;
//             }
//             endingrow--;
//                 // print starting column
//                 for (int i = endingrow;count < total&& i >= startingrow; i--) {
//                 ans.push_back(matrix[i][startingcol]);
//                 count++;
//             }
//             startingcol++;
//         }
//          return ans;
//     }
// };






//5. Leetcode 48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
        
//         // Transpose the matrix
//         for (int i = 0; i < n; ++i) {
//             for (int j = i; j < n; ++j) {
//                 swap(matrix[i][j], matrix[j][i]);
//             }
//         }
        
//         // Reverse each row
//         for (int i = 0; i < n; ++i) {
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
//     }
// };






//6. Leetcode 74. Search a 2D Matrix
//  Binary search in 2d array
// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         // apply binary search

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end = row * col-1;
//         int mid = start + (end - start) / 2;
//         while (start <= end) {
//             if (matrix[mid / col][mid % col] == target) {
//                 return true;
//             } else if (matrix[mid / col][mid % col] < target) {
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }

//             mid = start + (end - start) / 2;
//         }
//         return false;
//     }
// };






//7. IMPORTANT QUESTION
// 240. Search a 2D Matrix II
// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowindex = 0;
//         int colindex = col - 1;

//         while (rowindex < row && colindex >= 0) {
//             int element = matrix[rowindex][colindex];

//             if (element == target) {
//                 return 1;
//             }
//             if (element < target) {
//                 rowindex++;
//             } else {
//                 colindex--;
//             }
//         }
//         return 0;
//     }
// };



//8. IMPORTANT 
// DYNAMIC ALLOCATION OF 2D ARRAY
#include<iostream>
using namespace std;

int main(){
    int row, column;
    cout << "Enter the number of rows you want to make: ";
    cin >> row;

    int **array = new int *[row]; //making 2pointer array for storing each row first address
    int *columns = new int[row];  // Array to store the size of each row

    for (int i = 0; i < row; i++)
    {
        cout << "Enter the length of row " << i + 1 << ": ";
        cin >> column;
        columns[i] = column;  // Store the size of the current row
        array[i] = new int[column];
        for (int j = 0; j < column; j++)
        {
            cout << "Enter element " << j + 1 << " of "<<i+1<<" row"<<endl;
            cin >> array[i][j];
        }
    }

    cout << "Printing what you entered:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columns[i]; j++)  // Use the stored size of the row
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Cleanup: Free the dynamically allocated memory
    for (int i = 0; i < row; i++)
    {
        delete[] array[i];
    }
    delete[] array;
    delete[] columns;

    return 0;
}
