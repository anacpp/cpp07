#include <iostream>
#include <string>

#include "iter.hpp"

template <typename T>
void printElement(const T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void increment(T &element)
{
	++element;
}

void addExclamation(std::string &text)
{
	text += "!";
}

int main(void)
{
	int numbers[] = {0, 1, 2, 3, 4};
	const std::size_t numbersLength = sizeof(numbers) / sizeof(numbers[0]);

	::iter(numbers, numbersLength, increment<int>);
	::iter(numbers, numbersLength, printElement<int>);

	std::string words[] = {"templates", "are", "useful"};
	const std::size_t wordsLength = sizeof(words) / sizeof(words[0]);

	::iter(words, wordsLength, addExclamation);
	::iter(words, wordsLength, printElement<std::string>);

	const int constants[] = {42, 21};
	const std::size_t constantsLength = sizeof(constants) / sizeof(constants[0]);

	::iter(constants, constantsLength, printElement<int>);
	return 0;
}
