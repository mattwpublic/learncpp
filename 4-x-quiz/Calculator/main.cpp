#include <iostream>

double getInputDouble()
{
    double x {};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char getInputOperator()
{
    char op {};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> op;
    return op;
}

double doMath(double x, double y, char op)
{
    double result {};
    switch (op)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        default:
            break;
    }
    return result;
}

void printOutput(double x, double y, char op, double result)
{
    std::cout << x << " " << op << " " << y << " is " << result;
}

int main()
{
    double x { getInputDouble() };
    double y { getInputDouble() };
    char op { getInputOperator() };
    double result { doMath(x, y, op)};

    printOutput(x, y, op, result);

    return 0;
}
