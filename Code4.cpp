
#include <iostream>
using namespace std;
 
int main ()
{
	int grade;
	
	cout << "Enter your grade : ";
	cin >> grade;
	if (grade >= 90)
		cout << "A\n";
	else if (grade >= 80)
		cout << "B\n";
	else if (grade >= 70)
		cout << "C\n";
	else if (grade >= 60)
		cout << "D\n";
	else
		cout << "You failed" << endl;
 
	return 0;
}
