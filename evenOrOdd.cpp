#include <iostream>

int main()
{
    int evenOrOdd;
    std::cin >> evenOrOdd;

    if (evenOrOdd % 2 == 0)
    {
        std::cout << "The value " << evenOrOdd << " is an even number";
    }
    else
    {
        std::cout << "The value " << evenOrOdd << " is an odd number";
    }

    return 0;
}