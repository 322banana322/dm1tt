/*Задание 1
Вариант 1.
Номер варианта – остаток от деления суммы всех букв фамилии на число вариантов.
*/

#include <iostream>
#include <string>
using namespace std;

int func(string lName, int numV) {
	int n = lName.size();
	if (n > 0 && numV > 0) {
		int var = n % numV + 1;
		cout << "Your option: " << var;
	}
	else cout << "Enter correct data";
}

int main() {
	cout << "Enter the last name and number of options" << endl;
	string ln;
	int opt;
	cin >> ln >> opt;
	func(ln, opt); 
}
