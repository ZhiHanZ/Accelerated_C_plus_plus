#include <iostream>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	int s = 1;
	for (int i = 1; i < 10; ++i)
		s = s * i;
	cout << s << endl;		
	system("pause");
	return 0;
	getchar();
}