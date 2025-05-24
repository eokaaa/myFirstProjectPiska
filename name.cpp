#include <iostream>
#include <string>

int main() 
{
	int qwe;
	std::cout << "Какой размер вашего краника: ";
	std::cin >> qwe;

	std::cout << "\n⚪⚪";
	for (int i{ 0 }; i < qwe; ++i)
		std::cout << "\n ||";
	std::cout << "\n 🤍\n";

	return 0;
}