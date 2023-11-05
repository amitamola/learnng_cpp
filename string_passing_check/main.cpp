#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string str)
{
    str = "New string";
    std::cout << str << '\n';
}

int main()
{

    std::string s1{ "Hello, world!" };
    std::string_view s2 {s1};

    std::cout << s1 << '\n';
    std::cout << s2 << '\n';

    
    printSV(s1); //call printSV with s1
    std::cout << s1 << '\n'; // s1 is unchanged
    std::cout << s2 << '\n'; // s2 is unchanged

    return 0;
}

//So there is pass by value and not pass by reference
