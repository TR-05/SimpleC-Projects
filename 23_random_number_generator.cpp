#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << '\n' << num1;
    std::cout << '\n' << num2;
    std::cout << '\n' << num3;


}