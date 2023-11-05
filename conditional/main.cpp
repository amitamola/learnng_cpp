#include <iostream>

int main()
{
    int x { 2 };
    int y { 1 };
    int z { 10 - ((x > y)? x : y) };

    std::cout << z;

    return 0;
}
