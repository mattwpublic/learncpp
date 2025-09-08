#include <iostream>

double getInput()
{
    double x{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> x;
    return x;
}

double calculateBallHeight(double tower_height, double time)
{
    double gravity { 9.8 };
    double ball_height { tower_height - ((gravity * time * time) / 2.0) };
    if(ball_height < 0.0)
    {
        ball_height = 0.0;
    }
    return ball_height;
}

void printBallHeight(double ball_height, double time)
{
    if(ball_height <= 0.0)
    {
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
    }
    else
    {
        std::cout << "At " << time << " seconds, the ball is at height: " << ball_height << " meters \n";
    }
}

int main()
{
    double tower_height { getInput() };

    for(int i = 0; i <= 5; i++)
    {
        printBallHeight(calculateBallHeight(tower_height, i), i);
    }

    return 0;
}
