//1. FILE 


// print triangle of star and space
//    *
//   * *
//  * * *

// #include<iostream>
// using namespace std;

// int main(){;
// int row;
// cout<<"Enter the numbe rof rows you want to print"<<endl;
// cin>>row;
// for (int i = 0; i < row; i++)
// {   
//     for (int j = 0; j <row-i-1; j++)
//     {
//         cout<<" ";
//     }
//     for (int j = 0; j <i+1; j++)
//     {
//         cout<<"* ";
//     }
    
//     cout<<endl;
    
// }
// };


#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the number of rows you want to make"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int star = 0; star < row-i; star++)
        {
            cout<<"*";
        }
        for (int space = 0; space < 2*i+1; space++)
        {
            cout<<" ";
        }
        for (int star = 0; star < row-i; star++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int star = 0; star < i+1; star++)
        {
            cout<<"*";
        }
        for (int space = 0; space < (2*row)-(2*i)-1; space++)
        {
            cout<<" ";
        }
        for (int star = 0; star < i+1; star++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}