#include <iostream>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	int r_len, l_len;
	cout << "input The length you want for your longitude" << endl;
	cin >> r_len;
	cout << "input The length you want for your width" << endl;
	cin >> l_len;
	for (int r = 0; r != r_len; ++r)
	{
		string star(l_len, '*');
		cout << star;
		cout << endl;
	}
	system("pause");
	return 0;
	getchar();
}