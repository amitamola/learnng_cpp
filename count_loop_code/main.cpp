#include <iostream>

// Iterate through every number between 1 and 50
int main()
{
    int count{ 1 };
    while (count <= 200)
    {
        // print the number (pad numbers under 100 with a leading 0 for formatting purposes)
        if (count < 100)
        {
            std::cout << '0';
        }

        // print the number (pad numbers under 10 with a leading 0 for formatting purposes)

        if (count < 10)
        {
            std::cout << '0';
        }

        std::cout << count << ' ';

        // if the loop variable is divisible by 10, print a newline
        if (count % 10 == 0)
        {
            std::cout << '\n';
        }

        // increment the loop counter
        ++count;
    }

    return 0;
}


// #include <iostream>
// #include <iomanip> // for std::setw and std::setfill

// int main()
// {
//     for (int count = 1; count <= 200; ++count)
//     {
//         // print the number with leading zeros if necessary
//         std::cout << std::setw(3) << std::setfill('0') << count << ' ';

//         // if the loop variable is divisible by 10, print a newline
//         if (count % 10 == 0)
//         {
//             std::cout << '\n';
//         }
//     }

//     return 0;
// }
