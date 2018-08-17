#include <iostream>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	string name;
	cin >> name;
	const string greeting = "Hello, " + name;
	const int piv = 0;
	const int rows = 3;
	const string::size_type cols = greeting.size() + 2;
	cout << endl;
	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;
		while (c != cols)
		{
			if (r == piv + 1 && c == piv + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				++c;
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
	getchar();
}