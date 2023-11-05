// #include <iostream>
// #include <string>
// #include <string_view>

// int main()
// {
//     std::string_view sv{};

//     { // create a nested block
//         std::string s{ "Hello, world!" }; // create a std::string local to this nested block
//         sv = s; // sv is now viewing s
//     } // s is destroyed here, so sv is now viewing an invalid string

//     std::cout << sv << '\n'; // undefined behavior

//     return 0;
// }


#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string s { "Hello, world!" };
    std::string_view sv { s }; // sv is now viewing s

    s = "Hello, universe!";    // modifies s, which invalidates sv (s is still valid)
    std::cout << sv << '\n';   // undefined behavior

    return 0;
}
