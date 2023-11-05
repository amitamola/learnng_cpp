#include "add.h" // Contents of add.h copied here
#include <iostream>
// import cout, cin and string from std namespace in one line
using std::cout, std::cin, std::string;

// int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere

int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

