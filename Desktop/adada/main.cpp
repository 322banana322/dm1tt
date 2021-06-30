#include <iostream>
//stroka dobavlena tolko radi patcha
void lRoundShiftMas(int* source, int n, int size)
{
	for (int k = n; k > 0; k--) 
	{
	
		int temp = source[0];
		for (int i = 0; i < size; i++)
		{
			source[i] = source[i + 1];
		}
		source[size - 1] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << source[i]<<" ";
	}
}

void testlRoundShiftMas(int n, int size)
{
	if (n < 0 || size <= 0)
	{
		std::cout << "EROR";
		exit(0);
	}
	
}

int main()
{
	int s, nu;
	std::cout<<"Enter mass size"<<std::endl;
	std::cin >> s;
	std::cout<<"Enter number of shifts"<<std::endl;
	std::cin>>nu;
	testlRoundShiftMas(nu, s);
	std::cout<<"enter array elements"<<std::endl;
	int mass[s];
	for (int i = 0; i < s; i++)
	{
		std::cin >> mass[i];
	}
	
	lRoundShiftMas(mass, nu, s);
	return 0;
}

