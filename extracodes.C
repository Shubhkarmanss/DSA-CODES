//Q1 GCD/HCF
// greatest number which divides two number and gives remainder 0


// Q2 (FAST POWER) Exponentiation by squaring. This algorithm efficiently computes x^n using a binary representation of n.









//Q1 GCD/HCF
// greatest number which divides two number and gives remainder 0

#include <iostream>
using namespace std;

int gcf(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        if (b > a)
        {
            b = b - a;
        }
    }
        // When a equals b, return either a or b (they are equal)
    return a;
}
int main()
{
    int a, b;
    cout << "Enter two number A and B" << endl;
    cin >> a >> b;
    cout << "You entered " << a << " and " << b << endl;
    int ans = gcf(a, b);
    cout << "The GCF/HCF of " << a << " and " << b << " is " << ans << endl;
}


// Q2 (FAST POWER) Exponentiation by squaring. This algorithm efficiently computes x^n using a binary representation of n.

int exponential(int x, int n) {
    int res = 1;
    while (n > 0) {
        if (n & 1) { // If the least significant bit of n is 1
            res = res * x; // Multiply the result by x
        }
        x = x * x; // Square x
        n = n >> 1; // Right shift n by 1 bit (divide n by 2)
    }
    return res;
}

