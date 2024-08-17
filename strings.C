// 6. FILE INDEX

// 1.Tell the length of string without space

// 2.Reverse a string
// leetcode 344

// 3. Check if the string is a valid palindrome
// Leetcode 125. Valid Palindrome

//  4. Reverse a string
// input= like hey how are you
// output = ekil yeh woh era uoy


//5. Find the maximum occuring character in the string






// 1.Tell the length of string without space

// #include<iostream>
// using namespace std;

// int getlength(char name[]){
//     int count=0;
//     for (int i = 0; name[i] !='\0'; i++)
//     {
//         count++;
//     }
//     return count;

// }
// int main(){
//     char name[20];
//     cout<<"Enter the name"<<endl;
//     cin>>name;

//     cout<<"You entered the name "<<name <<endl;
//     cout<<"The length of the name is "<<getlength(name)<<endl;
// }

// 2.Reverse a string
// leetcode 344

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i=0;
//         int j=s.size()-1;
//         while(i<=j){
//             swap(s[i],s[j]);
//             i++;
//             j--;
//         }
//     }
// };

// or done her also in this laptop code

// #include <iostream>
// using namespace std;
// void reverse(char name[], int length)
// {
//     int start = 0;
//     int end = length - 1;
//     while (start < end)
//     {
//         swap(name[start++], name[end--]);
//     }
// }
// int getlength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout << "Enter the name" << endl;
//     cin >> name;

//     cout << "You entered the name " << name << endl;
//     cout << "The length of the name is " << getlength(name) << endl;
//     int length = getlength(name);
//     reverse(name, length);
//     cout << "The reverse of the string is " << name << endl;

// }

// 3. Check if the string is a valid palindrome

// Leetcode 125. Valid Palindrome
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.
// Example 1:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:
// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:
// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
// Constraints:
// 1 <= s.length <= 2 * 105
// s consists only of printable ASCII characters.

// Approach to this question is that just remove the faltu character then convert the string in lower case and then check for palindrome

// #include <iostream>
// using namespace std;

// bool isvalid(char ch) {
//         if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
//             (ch >= '0' && ch <= '9')) {
//             return 1;
//         } else
//             return 0;
//     }
//     char conversiontosmall(char ch) {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 0 && ch <= 9)) {
//             return ch;
//         } else {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     bool isvalidpalindrome(string temp) {
//         int start = 0;
//         int end = temp.length() - 1;
//         while (start <= end) {

//             if (temp[start] != temp[end]) {
//                 return false;
//             } else {
//                 start++;
//                 end--;
//             }
//         }
//         return true;
//     }

// int main()
// {
//     string str;
//     cout << "Enter the string " << endl;
//     str="no on";
//     cout << "You entered this string :" << str << endl;
//     string temp="";

//     // remove faltu character
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (isvalid(str[i]))
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     // convert to small letters
//     for (int i = 0; i < temp.length(); i++)
//     {
//         temp[i] = conversiontosmall(temp[i]);
//     }

//     bool answer = isvalidpalindrome(temp);
//     if (answer == 1)
//     {
//         cout << "Yes its a valid palindrome" << endl;
//     }
//     else if (answer == 0)
//     {
//         cout << "No its not a valid palindrome" << endl;
//     }

//     return 0;
// }

// 4. Reverse a string
// input= like hey how are you
// output = ekil yeh woh era uoy

// so the approach is we input string and after every space we know that the word is completed o we reverse that  word and then one last case is when there is no space the last word has only \0 then also we do reverse that word.

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// void reverseword(string &str, int from, int to)
// {
//     int start = from;
//     int end = to;
//     while (start <= end)
//     {
//         swap(str[start++], str[end--]);
//     }
// }

// int main()
// {
//     string str;
//     cout << "Already entered the string " << endl;
//     str = "shubh kar man";
//     cout << "The string is this :" << str << endl;
//     int from = 0;

//     for (int i = 0; i <= str.length(); i++)
//     {

//         if (str[i] == ' ' || i == str.length())
//         {
//             int to = i - 1;
//             reverseword(str, from, to);
//             from = i + 1;
//         }
//     }

//     cout << "The answer is :" << str << endl;

//     return 0;
// }

//5. Find the maximum occuring character in the string

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool isvalid(char ch)
// {
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//     {
//         return 1;
//     }
//     else
//         return 0;
// }

// int main()
// {
//     string str;
//     cout << "Enter the string " << endl;
//     getline(cin, str);
//     cout << "The string is this :" << str << endl;
//     int array[26]={0};
//     // remove faltu character
//     vector<char> temp={0};
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (isvalid(str[i]))
//         {
//             temp.push_back(str[i]);
//         }
//     }

// // storing the occurance of each alphabet
//     for (int i = 0; i < temp.size(); i++)
//     { int number=0;
//         if (temp[i]>='a'&&temp[i]<='z')
//         {
//             number=temp[i]-'a';
//         }
//         else
//         {
//             number=temp[i]-'A';
//         }
//         array[number]++;

//     }

//         int maxi=-1,ans=0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (array[i]>maxi)
//         {
//             maxi=array[i];
//             ans=i;
//         }

//     }
//     char finalanswer= 'a'+ans;
//     cout<<"The maximum alphabet is "<<finalanswer<<endl;

// }

//  Replace spaces with @40

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter the string " << endl;
//     getline(cin, str);
//     cout << "The string is this :" << str << endl;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             str.replace(i, 1, "@40");
//             i=i+2;
//         }
//     }
//     cout << "The string is this :" << str << endl;
// }

// // str.replace(i, 1, "@40");
// // is used to replace a character at a specific index in a string with another substring. Let's break it down:

// // Explanation:
// // str is a string object.
// // i is the index in the string where the replacement will begin.
// // 1 is the number of characters to replace starting from the index i.
// // "@40" is the substring that will replace the character at index i.

// Remove all the occurences in the string
// 1910 Leetcode question

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while (s.length() != 0 && s.find(part) < s.length()) {
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };

// Permutation in string

// #include <iostream>
// #include <string>
// #include<vector>

// using namespace std;

// bool isvalid(char ch)
// {
//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
// bool checkequal(int a[26], int b[26])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (a[i] != b[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {

//     string strsmall, strlarge;
//     cout << "Enter the small string " << endl;
//     getline(cin, strsmall);
//     cout << "The string is this :" << strsmall << endl;
//     cout << "Enter the large string " << endl;
//     getline(cin, strlarge);
//     cout << "The string is this :" << strlarge << endl;
//     int array[26] = {0};
//     vector<char> temp = {0};

//     // remove faltu character from large string
//     for (int i = 0; i < strlarge.length(); i++)
//     {
//         if (isvalid(strlarge[i]))
//         {
//             temp.push_back(strlarge[i]);
//         }
//     }

//     // storing the occurance of each alphabet
//     for (int i = 0; i < strsmall.length(); i++)
//     {
//         int number = 0;
//         if (temp[i] >= 'a' && temp[i] <= 'z')
//         {
//             number = temp[i] - 'a';
//         }
//         else
//         {
//             number = temp[i] - 'A';
//         }
//         array[number]++;
//     }

//     // traverse strlarge in window of size small and compare
//     int i = 0;
//     int window = strsmall.length();
//     int count[26] = {0};

//     // running for first time
//     while (i < window&& i<temp.size())
//     {
//         int index = temp[i] - 'a';
//         count[index]++;
//         i++;
//     }

//     if (checkequal(array, count))
//     {
//         cout<<"Yes";
//         return 1;
//     }

//     // aage window process kro
//     while (i < temp.size())
//     {
//         char newchar = temp[i];
//         int index = newchar - 'a';
//         count[index]++;

//         char oldchar = strlarge[i - window];
//         index = oldchar - 'a';
//         count[index]--;

//         i++;
//         if (checkequal(array, count))
//         cout<<"Yes";
//             return 1;
//     }
//     cout<<"NO";
//     return 0;
// }
// Chatgpt code below (might be wrong)
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// bool isvalid(char ch)
// {
//     return ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'));
// }

// bool checkequal(int a[52], int b[52])
// {
//     for (int i = 0; i < 52; i++)
//     {
//         if (a[i] != b[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     string strsmall, strlarge;
//     cout << "Enter the small string: " << endl;
//     getline(cin, strsmall);
//     cout << "The string is this: " << strsmall << endl;
//     cout << "Enter the large string: " << endl;
//     getline(cin, strlarge);
//     cout << "The string is this: " << strlarge << endl;

//     int array[52] = {0}; // Array to store counts of both lowercase and uppercase letters
//     vector<char> temp;   // Correctly initialized as an empty vector

//     // Remove invalid characters from the large string
//     for (int i = 0; i < strlarge.length(); i++)
//     {
//         if (isvalid(strlarge[i]))
//         {
//             temp.push_back(strlarge[i]);
//         }
//     }

//     // Storing the occurrence of each alphabet in the small string
//     for (int i = 0; i < strsmall.length(); i++)
//     {
//         int number = 0;
//         if (strsmall[i] >= 'a' && strsmall[i] <= 'z')
//         {
//             number = strsmall[i] - 'a';
//         }
//         else
//         {
//             number = strsmall[i] - 'A' + 26; // Offset for uppercase letters
//         }
//         array[number]++;
//     }

//     // Traverse strlarge in a window of size small and compare
//     int i = 0;
//     int window = strsmall.length();
//     int count[52] = {0}; // Array to store counts of current window

//     // Running for the first window
//     while (i < window && i < temp.size())
//     {
//         int index = 0;
//         if (temp[i] >= 'a' && temp[i] <= 'z')
//         {
//             index = temp[i] - 'a';
//         }
//         else
//         {
//             index = temp[i] - 'A' + 26;
//         }
//         count[index]++;
//         i++;
//     }

//     if (checkequal(array, count))
//     {
//         cout << "Permutation found!" << endl;
//         return 0; // Return 0 to indicate success
//     }

//     // Sliding the window
//     while (i < temp.size())
//     {
//         char newchar = temp[i];
//         int index = 0;
//         if (newchar >= 'a' && newchar <= 'z')
//         {
//             index = newchar - 'a';
//         }
//         else
//         {
//             index = newchar - 'A' + 26;
//         }
//         count[index]++;

//         char oldchar = temp[i - window];
//         if (oldchar >= 'a' && oldchar <= 'z')
//         {
//             index = oldchar - 'a';
//         }
//         else
//         {
//             index = oldchar - 'A' + 26;
//         }
//         count[index]--;

//         i++;
//         if (checkequal(array, count))
//         {
//             cout << "Permutation found!" << endl;
//             return 0; // Return 0 to indicate success
//         }
//     }

//     cout << "No permutation found." << endl;
//     return 0; // Return 0 to indicate no permutation found
// }


//  Remove All Adjacent Duplicates In String
// 1047.Leetcode 

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         vector<char> stack;
//         for (char ch : s) {
//             if (!stack.empty() && stack.back() == ch) {
//                 stack.pop_back();
//             } else {
//                 stack.push_back(ch);
//             }
//         }
//         return string(stack.begin(), stack.end());
//     }
// };

// String Compression
// Leetcode 443

// #include<iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i = 0; // Pointer to traverse the chars array
//         int ansIndex = 0; // Pointer to store the position in the compressed array
//         int n = chars.size(); // Size of the input array

//         while (i < n) {
//             int j = i + 1;
//             // Find the length of the sequence of identical characters
//             while (j < n && chars[i] == chars[j]) {
//                 j++;
//             }

//             // Store the current character
//             chars[ansIndex++] = chars[i];

//             // Calculate the count of identical characters
//             int count = j - i;

//             // If the count is greater than 1, convert it to string and store each digit
//             if (count > 1) {
//                 string cnt = to_string(count);
//                 for (char ch : cnt) {
//                     chars[ansIndex++] = ch;
//                 }
//             }

//             // Move to the next sequence of characters
//             i = j;
//         }

//         // Return the length of the compressed array
//         return ansIndex;
//     }
// };

// // Example usage
// int main() {
//     Solution solution;
//     vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
//     int compressedLength = solution.compress(chars);

//     // Output the compressed array and its length
//     for (int i = 0; i < compressedLength; ++i) {
//         cout << chars[i];
//     }
//     cout << endl << "Compressed length: " << compressedLength << endl;

//     return 0;
// }
