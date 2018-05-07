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
	vector<double> integers;
	double x;
	while (cin >> x)
		integers.push_back(x);
	typedef vector<double>::size_type vec_sz;
	vec_sz sz = integers.size();
	if (sz == 0)
	{
		cout << "No data" << endl;
		return 1;
	}
	sort(integers.begin(), integers.end());
	for (int i = sz - 1; i != 0; --i)
		cout << integers[i] / 4 << endl;
	system("pause");
	return 0;
	getchar();

}