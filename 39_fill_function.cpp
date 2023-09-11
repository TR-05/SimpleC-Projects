#include <iostream>

int main()
{
    // fill() = fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods+ (SIZE/3), foods + (SIZE/3)*2, "burger");
    fill(foods+ (SIZE/3)*2, foods + SIZE, "hotdog");

    for(std::string food : foods){
        std::cout << food << ' ';
    }

    return 0;
}