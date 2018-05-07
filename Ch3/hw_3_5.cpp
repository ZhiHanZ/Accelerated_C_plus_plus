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
	vector<string> name_list;
	vector<double> grade_list;
	while (cin >> name)
	{
		cout << "Hello " << name << endl;
		name_list.push_back(name);
		cout << "Please enter your midtern and final exam grades";
		double midterm, final;
		cin >> midterm >> final;
		int count = 0;
		double sum = 0;
		int total = 5;//supposing there are five homeworks
		double x;
		cout << " Enter all of your homework grades.";
		while (cin >> x) {
			++count;
			sum += x;
			if (count == total)
				break;
		}
		if (count == 0)
		{
			cout << "You should input your homework grades" << endl;
			return 1;
		}
		streamsize prec = cout.precision();
		cout << "Your final grade is " << setprecision(3)
			<< 0.2*midterm + 0.4*final + 0.4*sum / count
			<< setprecision(prec) << endl;
		grade_list.push_back(0.2*midterm + 0.4*final + 0.4*sum / count);
	}

	system("pause");
	return 0;
	getchar();
}