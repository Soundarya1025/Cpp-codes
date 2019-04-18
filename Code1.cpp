
#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter the grade : ";
	cin >> grade;
	cout << (grade >= 60 ? "Passed\n" : "Failed\n");
	grade >=60 ? cout << "Passed\n" : cout << "Failed\n";

	return 0;
}
