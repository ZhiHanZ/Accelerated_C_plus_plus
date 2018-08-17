#include <iostream>
#include <string>
int main()
{
	std::cout << "Plz enter you Name: ";
	std::string name;
	std::cin >> name;
	const std::string greeting = "Hello, " + name + "!";
	//the number of blank surrounding the greeting
	const int pad = 1;
	// the total number of rows to write
	const int rows = pad * 2 + 3;
	std::cout << std::endl;
	int r = 0;
	while (r != rows) {
		//write a row of input
		std::cout << std::endl;
		++r;
	}
	system("pause");
	return 0;
	getchar();
}