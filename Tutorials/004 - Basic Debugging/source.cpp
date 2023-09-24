int main()
{
    /*
        Break points will be small red circles on the left hand side, 
        if you see it then a break point exists there. When the program 
        reaches that position it will stop and you can see all the current
        variables in scope.

        Key operations when a break point is hit:
        
        - Step over - Step to the next line
        - Step in - Step into the function (explored later)
        - Step out - Get out of the function (explored later)
        - Run - continue running until another break point is hit
        - Stop - stop the program 
    */

    float pi = 3.142; // Put a break point on this line and step line by line
    float diameter = 5.0;
    float circumference = pi * diameter;

    bool boolean = true;

    float single_point_precision = 1.0f;

    return 0;
}