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
	string name;
	cout << "please input the first name: " << endl;
	cin >> name;
	cout << "Hello" << name << endl;
	cout << "Please enter your midtern and final exam grades";
	double midterm, final;
	cin >> midterm >> final;
	cout << "homework;";
	vector<double> homework;
	double x;
	while (cin >> x)
		homework.push_back(x);
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl<<"data required¡£¡£¡£"<<endl;
		return 1;
	}
	sort(homework.begin(), homework.end());
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		                   : homework[mid];
	streamsize prec = cout.precision();
	cout << "Ur Final is: " << setprecision(3)
		<< 0.2*midterm + 0.4*final + 0.4*median
		<< setprecision(prec) << endl;
	system("pause");
	return 0;
	getchar();
}