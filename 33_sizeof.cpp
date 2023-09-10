#include <iostream>

int main()
{
    //sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects, etc.

    std::string name = "bro";
    double gpa = 2.5;
    char grade = 'B';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}