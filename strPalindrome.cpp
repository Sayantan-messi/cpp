# cpp
#include <iostream>
using namespace std;

// Recursive function to check if str[low..high] is a palindrome or not
bool isPalindrome(string str, int low, int high)
{
	// base case
	if (low >= high)
		return true;

	// return false if mismatch happens
	if (str[low] != str[high])
		return false;

	// move to the next pair
	return isPalindrome(str, low + 1, high - 1);
}

int main()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);     // takes the input of a string from the user
	int len = str.length();     //stores the length of the string

	if (isPalindrome(str, 0, len - 1))      // stores the base case of the recursive statement
		cout << "Palindrome";
	else
		cout << "Not Palindrome";

	return 0;
}
