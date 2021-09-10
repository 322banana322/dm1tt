
#include <iostream>
#include "strutil.h"
using namespace std; 

int main()
{
	char s1[100], s2[200];

	cin >> s1 >> s2;

	cout << strConteins(s1, s2);
}