#include <iostream>

void Function()
{
    std::cout << "Not within a namespace" << std::endl;
}

namespace Lambda
{
    void Function()
    {
        std::cout << "Within Lambda namespace" << std::endl;
    }
}

namespace Lambda
{
    namespace Core
    {
        void Function()
        {
            std::cout << "Within Lambda::Core namespace" << std::endl;
        }
    }
}

namespace Lambda::Utility
{
    void Function()
    {
        std::cout << "Within Lambda::Utility namespace" << std::endl;
    }
}

int main()
{
    Function();
    Lambda::Function();
    Lambda::Core::Function();
    Lambda::Utility::Function();

    return 0;
}