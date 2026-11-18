#include <iostream>
#include <string>

#include "Array.hpp"

int main(void)
{
	Array<int> empty;
	Array<int> numbers(5);
	Array<std::string> words(3);

	std::cout << "empty size: " << empty.size() << std::endl;
	std::cout << "numbers size: " << numbers.size() << std::endl;
	std::cout << "words size: " << words.size() << std::endl;
	return 0;
}
