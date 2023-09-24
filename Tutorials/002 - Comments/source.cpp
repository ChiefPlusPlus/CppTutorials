// This is a single line comment
// Include std cout functionality
#include <iostream> // Preprocessor directive - File inclusion

int main()
{
    /*
        This is a multiline comment
        Print out a delightful message such as Hello There to the screen
        and we can talk about printing it on multiple lines

        std::cout - standard output stream
        << - insertion stream operator
        std::endl - new line and flush to the screen
    */
    std::cout << "Hello There" << std::endl; // Semi colon when the statement is finished
    
    /*
        You can chain items for the stream operators and even put them on separate lines,
        be sure to end with a semi-colon;
    */
    std::cout << 
        "General " << 
        "Kenobi" <<
        std::endl; // Semi colon when the statement is finished
    
    /* Multiline comments do not need to be on multiple lines */
    /* Return 0 because everything went as expected and 0 means its all good :) */
    return 0;
}