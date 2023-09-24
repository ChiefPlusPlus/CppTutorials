#include <iostream>

int main()
{
    int jimmy_age = 12;
    
    int timmy_age;
    timmy_age = 14;

    int age_difference = timmy_age - jimmy_age;

    std::cout << "Jimmy is: " << jimmy_age << " years old" << std::endl;
    std::cout << "Timmy is: " << timmy_age << " years old" << std::endl;
    std::cout << "The age difference is: " << age_difference << " years" << std::endl;

    return 0;
}