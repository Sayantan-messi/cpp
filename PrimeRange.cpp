#include <iostream>

bool prime(int num)   // enter a number from the main function
{
    for(int i = 2 ; i <= num/2 ; i ++)  //loop to find the factores of the number
    {
        if(num % i == 0)  //calc the remainder of the number and checks whether it is 0 or not
           return false; 
    }
    return true;
}
int main()  //main function
{
    int start , end , result = 0;
    std::cout << "Enter the Starting value";  //enter the starting value from the user
    std::cin >> start;
    std::cout << "Enter the ending value";    // enter the ending value from the user
    std::cin >> end;
    for(int i = start ; i <= end ; i ++)  //loop to extract each number upto the limit of the given number
    {
        if(prime(i) == true)  //stores of the number if prime
             std::cout << "The Prime number is :" <<  i << std::endl;  //displays the number
    }
    return 0;
}

