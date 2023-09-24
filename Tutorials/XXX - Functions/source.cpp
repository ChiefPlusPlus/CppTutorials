/*
    Void function
    Input only function
    Output only function
    Input / Output function
    Multiple input function
    Overloaded function  
    SplitFunction
*/

#include <iostream>

void VoidFunction()
{
    std::cout << "Func - Nothing Input or Output but stuff still happens" << std::endl;
}

void InputOnlyFunction(int value)
{
    std::cout << "Func - " << value << std::endl;
}

int OutputOnlyFunction()
{
    int output = 5;
    std::cout << "Func - Outputting: " << output << std::endl;
    return output;
}

int InputOutputFuction(int value)
{
    int output = value * 3;
    std::cout << "Func - Input was: " << value << std::endl;
    std::cout << "Func - Outputting: " << output << std::endl;
    return output;
}

int MultipleInputFunction(int first, int second)
{
    return first * second;
}

void OverloadedFunction(int value)
{
    std::cout << "Func - Int is:  " << value << std::endl;
}

void OverloadedFunction(char value)
{
    std::cout << "Func - Char is: " << value << std::endl;
}

int SplitFunction(int value);

int main()
{
    VoidFunction();
    InputOnlyFunction(10);
    
    int output;
    output = OutputOnlyFunction();
    std::cout << "Main - Output is: " << output << std::endl; 

    output = InputOutputFuction(4);
    std::cout << "Main - Output is: " << output << std::endl; 

    output = MultipleInputFunction(7, 3);
    std::cout << "Main - Output is: " << output << std::endl; 

    output = SplitFunction(2);
    std::cout << "Main - Output is: " << output << std::endl; 

    return 0;
}

int SplitFunction(int value)
{
    return value * 2;
}