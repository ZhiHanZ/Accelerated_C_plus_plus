#include <iostream>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	int n1, n2;
	cout << "please input the first number" << endl;
	cin >> n1;
	cout << "please input the second number" << endl;
	cin >> n2;
	if (n1 > n2)
		cout << "n1 is greater" << endl;
	else
		if (n2 > n1)
			cout << "n2 is greater" << endl;
		else
			cout << "even" << endl;
	system("pause");
	return 0;
	getchar();
}