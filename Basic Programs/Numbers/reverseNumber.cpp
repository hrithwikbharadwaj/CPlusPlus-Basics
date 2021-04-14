#include <iostream>
using namespace std;

int reverse(int n)
{
    int lastDigit, reverse;
    while (n > 0)
    {
        lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    return reverse;
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}