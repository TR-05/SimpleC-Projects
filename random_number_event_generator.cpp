#include <iostream>

int main()
{
    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: std::cout << "You win nothing! \n";
                break;
        case 2: std::cout << "You win $20! \n";
                break;
        case 3: std::cout << "You win airpods! \n";
                break;
        case 4: std::cout << "You win hamburger! \n";
                break;
        case 5: std::cout << "You win drake tickets ): \n";
                break;

    }

    return 0;
}