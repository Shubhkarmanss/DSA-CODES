//2. FILE INDEX

//1. Decimal to binary conversion
//  method 1, divide by 2

//2. Decimal to binary conversion
//  method 2,do & with 1 to find bit

//3. Binary to decimal conversion
//  method 1, divide by 10

//4. Binary to decimal conversion
//  method 2, do & with 1 to find bit

//5. Reverse of a number

//6. Compliment of a number
// like 5 = 101 then its compliment is 010

//7. Roman number system to Integer
// leetcode 13. Roman to Integer






//1. Decimal to binary conversion
//  method 1, divide by 2

// #include <iostream>
// #include <cmath>
// using namespace std;

// void decimaltobinary(int number){
//     int i=0;
//     int answer=0;
//     while(number>0){
//     int bit=0;
//     bit=number%2;
//     // cout<<bit<<endl;
//     number=number/2;
//     answer=bit*pow(10,i)+answer;
//     i++;

//     }
//     cout<<answer;
// }

// int main()
// {
//     cout<<"Enter the decimal number you want to find it in binary"<<endl;
//     int number;
//     cin>>number;
//     decimaltobinary(number);
//     return 0;
// }

//2. Decimal to binary conversion
//  method 2,do & with 1 to find bit

// #include <iostream>
// #include <cmath>
// using namespace std;

// void decimaltobinary(int number){
//     int i=0;
//     int answer=0;
//     while(number>0){
//     int bit=0;
//     bit=number&1;
//     number= number>>1;
//     answer=bit*pow(10,i)+answer;
//     i++;

//     }
//     cout<<answer;
// }

// int main()
// {
//     cout<<"Enter the decimal number you want to find it in binary"<<endl;
//     int number;
//     cin>>number;
//     decimaltobinary(number);
//     return 0;
// }

//3. Binary to decimal conversion
//  method 1, divide by 10 

// #include <iostream>
// #include <cmath>
// using namespace std;

// void binarytodecimal(int number){
//     int i=0;
//     int answer=0;
//     while(number>0){
//     int bit=0;
//     bit=number%2;
// // we can do either number%2 or can also do number%10, both are correct as at last we have 1 or zero only infact we can do % of number with any number, it will give correct answer as it has 0 or 1 at last
//     // cout<<bit<<endl;
//     number=number/10;
//     answer=bit*pow(2,i)+answer;
//     i++;

//     }
//     cout<<answer;
// }

// int main()
// {
//     cout<<"Enter the binary number you want to find it in decimal"<<endl;
//     int number;
//     cin>>number;
//     binarytodecimal(number);
//     return 0;
// }

//4. Binary to decimal conversion
//  method 2, do & with 1 to find bit

// #include <iostream>
// #include <cmath>
// using namespace std;

// void binarytodecimal(int number){
//     int i=0;
//     int answer=0;
//     while(number>0){
//     int bit=0;
//     bit=number&1;
//     // cout<<bit<<endl;
//     number=number/10;
//     answer=bit*pow(2,i)+answer;
//     i++;

//     }
//     cout<<answer;
// }

// int main()
// {
//     cout<<"Enter the binary number you want to find it in decimal"<<endl;
//     int number;
//     cin>>number;
//     binarytodecimal(number);
//     return 0;
// }

//5. Reverse of a number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, last;
//     int flag = 1;
//     int answer = 0;
//     cout << "Enter the number" << endl;
//     cin >> num;

//     while (num > 0)
//     {
//         last = num % 10;
//         if ((answer <= INT16_MIN / 10) || (answer >= INT16_MAX / 10))
//         {
//             cout << "Answer out of range" << endl;
//             break;
//             flag = 0;
//         }

//         answer = (answer * 10) + last;
//         num = num / 10;
//     }
//     if (flag == 1)
//     {
//         cout << "The reverse of your number is this " << answer << endl;
//     }
// }


//6. Compliment of a number
// like 5 = 101 then its compliment is 010


// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
    
//     int mask=0;
//     int answer;
//     cout << "Enter the number" << endl;
//     cin >> num;
//     int n=num;
// if (num==0)
// {
//     return 1;
// }

//     while (n!=0)
//     {
//        mask= (mask<<1)|1;
//        n=n>>1;
//     }
//   answer=(~num)&mask;  
//       cout << "The answer is "<<answer << endl;

// }


//7. Roman number system to Integer
// leetcode 13. Roman to Integer


// class Solution {
// public:
//     int romanToInt(string s) {
//         unordered_map<char, int> m;
        
//         m['I'] = 1;
//         m['V'] = 5;
//         m['X'] = 10;
//         m['L'] = 50;
//         m['C'] = 100;
//         m['D'] = 500;
//         m['M'] = 1000;
        
//         int ans = 0;
        
//         for(int i = 0; i < s.length(); i++){
//             if(m[s[i]] < m[s[i+1]]){
//                 ans =ans- m[s[i]];
//             }
//             else{
//                 ans =ans+ m[s[i]];
//             }
//         }
//         return ans;
//     }
// };