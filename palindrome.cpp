# cpp
#include <iostream>

int palindrome(int num)       //finction to calculate the palindrome of a number
{
    int digit = 0,sum = 0;
    while(num != 0)        // to check whether the number is 0 or not
    {
        digit = num % 10;     // stores the last digit of the number
        sum = sum * 10 + digit;     //reverses the digits
        num = num / 10;
    }
    return sum;     //returns the sum
}
int main()
{
    int user_input;      // stores the input taken from the user
    std::cout << "Enter a number";
    std::cin >> user_input;       //input taken from the user
    if(input == pal(input))       // checks whether the number is palindrome or not
        std::cout << "The number is Palindrome" << std::endl;
    else
        std::cout << "The number is not Palindrome" << std::endl;
    
    return 0;

}
