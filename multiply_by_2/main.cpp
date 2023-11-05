// Write cpp code that asks the user to enter an integer and then prints the integer, but multiply the number by 2 before printing it.
// Enter an integer: 4
// Double that number is: 8


#include <iostream>

using std::cout, std::cin, std::string;


int main()
{
    int number {};

    cout << "Enter an integer: ";
    cin >> number;
    // cout << "Double that number is: " << number * 2;
    cout << "Double " << number << " is: " << number * 2 << "\n";

    cout << "Triple " << number << " is: " << number * 3;

    return 0;

}
