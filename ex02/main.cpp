#include <iostream>
#include <string>

#include "Array.hpp"

int main(void)
{
	Array<int> empty;
	Array<int> numbers(5);

	for (unsigned int index = 0; index < numbers.size(); ++index)
		numbers[index] = static_cast<int>(index * index);

	Array<int> numbersCopy(numbers);
	numbersCopy[0] = 42;
	const Array<int> readOnly(numbers);

	std::cout << "empty size: " << empty.size() << std::endl;
	std::cout << "original[0]: " << numbers[0] << std::endl;
	std::cout << "copy[0]: " << numbersCopy[0] << std::endl;
	std::cout << "readOnly[4]: " << readOnly[4] << std::endl;

	try
	{
		std::cout << empty[0] << std::endl;
	}
	catch (const std::exception &exception)
	{
		std::cout << "out of bounds: " << exception.what() << std::endl;
	}
	return 0;
}
