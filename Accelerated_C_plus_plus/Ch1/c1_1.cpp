#include <iostream>
#include <string>
int main()
{
	std::cout << "Please Enter you Name" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "!" << std::endl;
	system("pause");
	return 0;
	getchar();
}