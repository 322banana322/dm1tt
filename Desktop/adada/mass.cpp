#include <iostream>
using namespace std;

int main()
{
	int n; 
	cout << "Enter the dimension of the array"<<endl; //создание и ввод массива с числами
	cin >> n;
	if (n<=0)
	{
		cout<<"EROR"<<endl;
		exit(0);
	}
	
	cout << "Enter an array"<<endl;

	int *arr = new int[n];     
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i]<=0)
		{
			cout<<"EROR"<<endl;
			exit(0);
		}
	}


	for (int i = 0; i < n - 1; i++)	//сортировка массива 
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
			
	cout << "In ascending order: ";  //вывод в порядке возрастания и убывания элементов 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
	}
	cout<<""<<endl;
	
	cout << "In descending order: ";
		for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i]<<" ";
	}
	cout<<""<<endl;
	
	int k = 0;
	int div = 2;
	int *arr2 = new int[n]; //Массив для сохранения количества множителей
	
	for(int i = 0; i < n;i++)
	{
		int temp=arr[i];
		
		while(temp>1)
		{
			while(temp%div==0)    //Находим кол-во множителей и сразу заполняем массив
			{
				k++;
				arr2[i]=k;
				temp=temp/div;
			}
			
			div++;
		}
	}
		
	for (int i = 0; i < n - 1; i++)			//сортировка массивов по увеличению числа множителей
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				
				int temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
				
				int temp2 = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp2;
			}
		}
	}
	cout<<"In order of increasing number of multipliers: ";

		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		
}
