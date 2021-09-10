/*Задание 1

Напишите программу, которая поможет рассчитать номер варианта (номер варианта для данного задания вичисляется,
как остаток от деления номера по списку на число вариантов).
Оформите вычисление варианта в виде функции.
*/

#include <iostream>
using namespace std;

int func(int numP, int numV) {
	int var = numP % numV + 1;
	cout << "your option is " << var;
	return 0;
}

int main() {
	cout << "Enter your list number and number of options" << endl;
	int numb, opt;
	cin >> numb >> opt;
	if (numb > 0 && opt > 0)

		func(numb, opt);

	else cout << "Enter correct data";
}
