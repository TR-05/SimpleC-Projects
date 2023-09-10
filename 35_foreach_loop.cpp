#include <iostream>

int main()
{
    // foreach loop = loop that eases traversal over an iterable data set
    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << '\n';
    }


    std::string students[] = {"Spongebob", "Patrick"};

    for(std::string student : students) {
        std::cout << student << '\n';
    }

    return 0;
}