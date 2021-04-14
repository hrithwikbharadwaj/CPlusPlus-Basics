// What is Amstrong Number

// Cube of all the digits in the number is equal to the number itself

// 1^3 + 5^3+ 3^3  = 153

#include <iostream>

using namespace std;
int isAmstrong(int n)
{
    int lastdigit;
    int answer;
    int originalNumber = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        answer = answer + lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (answer == originalNumber)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (isAmstrong(n))
    {
        cout << "it is an Amstrong Number";
    }
    else
    {
        cout << "it is not an Amstrong Number";
    }
    return 0;
}
