#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
using std::cin; using std::endl; using std::cout; using std::string;
int main()
{
	string name;
	cout << "please input the first name: " << endl;
	cin >> name;
	cout << "Hello"<<name << endl;
	cout << "Please enter your midtern and final exam grades";
	double midterm, final;
	cin >> midterm >> final;
	int count = 0;
	double sum = 0;
	double x;
	cout << " Enter all of your homework grades.";
	while (cin >> x) {
		++count;
		sum += x;
	}
	std::streamsize prec = cout.precision();
	cout << "Your final grade is " << std::setprecision(3)
		<< 0.2*midterm + 0.4*final + 0.4*sum / count
		<< std::setprecision(prec) << endl;
	system("pause");
	return 0;
	getchar();
}