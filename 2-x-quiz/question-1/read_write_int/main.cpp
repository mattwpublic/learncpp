#include <iostream>

int readNumber()
{
    int x{};

    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << x << '\n';
}

int main()
{
    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);
    return 0;
}
