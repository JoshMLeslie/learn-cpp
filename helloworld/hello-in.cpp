#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

string prompt()
{

	string userInput{};
	char decide{'n'};

	cout << "Hello. Do you have a thought?\n";
	cin >> userInput;
	cout << "You said, " + userInput + ". Correct?\n(y/n)";
	cin >> decide;
	if ('n' == decide) {
		return prompt();
	} else {
		cout << "Excellent choice.\n";
		return userInput;
	}
}

int main()
{
	string userInput { prompt() };
	cout << "You decided on " + userInput + ". Most excellent.";
	return 0;
}
