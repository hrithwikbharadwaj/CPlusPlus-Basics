#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool flag = 0;

    int n;
    cout << "Enter your Number \n";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << n << " is not a Prime Number";
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a Prime Number";
    }
}