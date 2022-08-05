#include <iostream>

int main()
{
	int Number1 = 0, Number2 = 0;

	std::cout << "Enter two numbers: " << std::endl;
	std::cin >> Number1 >> Number2;
	std::cout << "The sum of " << Number1 << " and " << Number2 << " is " << Number1 + Number2 << std::endl;

	return 0;
}