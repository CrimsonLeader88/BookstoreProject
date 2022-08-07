#include <iostream>

int main()
{
	int Sum = 0, Value = 0;

	while (std::cin >> Value)
	{
		Sum += Value;
	}

	std::cout << "The sum is: " << Sum << std::endl;

	return 0;
}