#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";

    int num{};
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << '\n' << "Triple that number is: " << num * 3 << '\n';
    return 0;
}
