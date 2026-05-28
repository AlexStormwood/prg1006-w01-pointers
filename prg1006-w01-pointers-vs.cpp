// prg1006-w01-pointers-vs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	std::string fruit = "Bananas\n";
    std::cout << fruit << &fruit << std::endl;

	std::string* fruitPointer = &fruit;

	std::cout << fruitPointer << std::endl;

	fruitPointer++;

	std::cout << fruitPointer << std::endl;
	std::cout << sizeof(fruit) << std::endl;
	std::cout << sizeof(fruitPointer) << std::endl;


	return 0;
}
