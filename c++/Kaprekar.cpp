#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int number, int base)
{
    if (number < 0 || base <= 1)
    {
        return false;
    }

    // Square the number
    long long squared = static_cast<long long>(number) * number;

    // divisor is initialized to 1
    long long divisor = 1;
    // Find a divisor such that it divides squared into left and right parts
    while (divisor <= squared / base)
    {
        divisor *= base;
    }

    // Now check each split of the number's square
    while (divisor > 1)
    {
        long long left = squared / divisor;
        long long right = squared % divisor;

        // Check if sum of left and right equals the original number
        if (left + right == number && right > 0)
        {
            return true;
        }

        divisor /= base;
    }
    return false;
}

int main()
{
    int number, base;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the base: ";
    cin >> base;
    
    // Check if the number is Kaprekar for the given base
    if (isKaprekar(number, base))
    {
        cout << number << " is a Kaprekar number in base " << base << endl;
    }
    else
    {
        cout << number << " is not a Kaprekar number in base " << base << endl;
    }

    return 0;
}
