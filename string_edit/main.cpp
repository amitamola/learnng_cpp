#include <iostream>
#include <string>
#include <string_view>

// int main()
// {
//     std::string name { "Alex" };
//     std::string_view sv { name }; // sv is now viewing name
//     std::cout << sv << '\n'; // prints Alex

//     sv = "John"; // sv is now viewing "John" (does not change name)
//     std::cout << sv << '\n'; // prints John

//     std::cout << name << '\n'; // prints Alex

//     return 0;
// }

int main()
{
    std::string name { "Alex" };
    std::string_view sv { name }; // sv is now viewing name
    std::cout << sv << '\n'; // prints Alex

    name = "Alex Johnny"; // Changed name to "John"
    std::cout << name << '\n'; // prints John

    std::cout << sv << '\n'; // prints John as sv is view of original name and it changes as well

    return 0;
}
