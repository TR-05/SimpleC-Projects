#include <iostream>

int main()
{
    // array = a data structure that can hold multiple values

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    cars[0] = "Camero";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}