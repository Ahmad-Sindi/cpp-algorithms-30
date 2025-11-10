// Algorithm Challenge
// 30 - Factorial of N
// Note: User should only enter a positive number, otherwise the program will ask again.

#include <iostream>
using namespace std;

int main()
{
    int num;
    long long result = 1; // Use long long for larger factorial results

    // Ask the user for input
    cout << "Enter a positive number: ";
    cin >> num;

    // Input validation: keep asking until user enters a positive number
    while (num <= 0)
    {
        cout << "You should enter a positive number!\n";
        cin >> num;
    }

    // Calculate factorial using a for loop (descending from num to 1)
    for (int i = num; i >= 1; i--)
    {
        result *= i; // Multiply result by current number
    }

    // Output the factorial result
    cout << "The factorial of " << num << " is: " << result << endl;

    return 0;
}
