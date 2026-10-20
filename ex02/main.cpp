#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> intStack;
	intStack.push(12);
	intStack.push(42);
	MutantStack<int>::iterator itInt;
	itInt = intStack.end();
	itInt--;
	std::cout << "MUTANT STACK <INT>" << std::endl;
	std::cout << *intStack.begin() << std::endl;
	std::cout << *itInt << std::endl;
	std::cout << std::endl;
	MutantStack<std::string> stringStack;
	stringStack.push("hello");
	stringStack.push(", ");
	stringStack.push("world");
	stringStack.push("!");
	MutantStack<std::string>::iterator itString;
	itString = stringStack.end();
	itString--;
	std::cout << "MUTANT STACK <STD::STRING>" << std::endl;
	std::cout << *stringStack.begin() << std::endl;
	std::cout << *itString << std::endl;
	std::cout << std::endl;
	std::vector<int> intVector;
	intVector.push_back(75);
	intVector.push_back(10);
	intVector.push_back(54);
	intVector.push_back(37);
	std::vector<int>::iterator itVector;
	itVector = intVector.end();
	itVector--;
	std::cout << "MUTANT STACK <STD::STRING>" << std::endl;
	std::cout << *intVector.begin() << std::endl;
	std::cout << *itVector << std::endl;
	std::cout << std::endl;
	return 0;
}
