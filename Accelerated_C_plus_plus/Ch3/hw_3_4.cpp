#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
using std::cin; using std::endl; using std::cout; using std::string;
using std::setprecision; using std::sort; using std::streamsize; using std::vector;
int main()
{
	string x;
	vector <string> lyst;
	while (cin >> x)
		lyst.push_back(x);
	sort(lyst.begin(), lyst.end());
	typedef vector<string>::size_type vec_sz;
	vec_sz sz = lyst.size();
	string max = lyst[sz - 1];
	cout << "The largest is " << lyst[sz-1]<<endl;
	string min = lyst[0];
	cout << "Minimum is " << lyst[0]<<endl;

	system("pause");
	return 0;
	getchar();
}