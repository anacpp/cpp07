#include <iostream>
#include <string>

#include "Array.hpp"

int main(void)
{
	Array<int> empty;
	Array<int> numbers(5);
	Array<std::string> words(3);
	Array<int> numbersCopy(numbers);
	Array<std::string> assigned;

	assigned = words;
	numbers = numbers;

	std::cout << "empty size: " << empty.size() << std::endl;
	std::cout << "numbers size: " << numbers.size() << std::endl;
	std::cout << "words size: " << words.size() << std::endl;
	std::cout << "copy size: " << numbersCopy.size() << std::endl;
	std::cout << "assigned size: " << assigned.size() << std::endl;
	return 0;
}
