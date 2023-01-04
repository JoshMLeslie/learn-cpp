#include <iostream>
#include <string>

using std::string;

int main()
{
	string input{};
	std::cout << "Hello. Do you have a thought?\n";
	std::cin >> input;
	std::cout << "You said, " + input + ". Correct?\n";
	return 0;
}
