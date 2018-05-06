#include <iostream>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	string name;
	cin >> name;
	int r_piv, c_l_piv, c_r_piv;
	cout << "please input the blank in rows" << endl;
	cin >> r_piv;
	cout << "please input the blank in the left side of greeting" << endl;
	cin >> c_l_piv;
	cout << "please input the blank in the right side of greeting" << endl;
	cin >> c_r_piv;
	const string greeting = " Hello, " + name;
	const int rows = r_piv * 2 + 3;
	const string::size_type cols = greeting.size() + c_l_piv + c_r_piv + 2;
	cout << endl;
	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;
		string star(cols, '*');
		string blank(cols-2, ' ');
		string real = "*" + blank + "*";
		string lblank(c_l_piv, ' ');
		string rblank(c_r_piv, ' ');
		if (r == 0 || r == rows - 1)
			cout << star;
		else
		{
			if (r == r_piv + 1)
				cout << "*" + lblank + greeting + rblank + "*";
			else
				cout << real;
		}
		cout << endl;

	}
	system("pause");
	return 0;
	getchar();
}