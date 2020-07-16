# cpp
#include <iostream>

int fac_num(int num)  //takes the number from the main function.
{
    int f = 1;
    for(int i = 1; i <= num; i ++)           //for loop that runs from i upto the number
        f = f * i;               //calculates the factorial of the number and stores in f
    return f;             // returns the factorial of the number
}
int main()
{
    int user_input;               //stores the number from the user
    std::cout << "Enter a number";
    std::cin >> user_input;               //takes the number from the user
    std::cout << "The factorial of the given number is :" << fac_num(user_input) << std::endl;            // prints the factorial of the number given by the user

    return 0;
}
