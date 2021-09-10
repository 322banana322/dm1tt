/*Задание 2
Написать функцию для определяет наличие строки A в строке str
int strConteins(char* a, char* str)
Возвращает - 1, если не содержит
Позицию начала, если содержит
Примечание :
1. Функция ищет только первое вхождение
2. Программа должна включать следующие файлы :
main.cpp – функции для тестирование strConteins
strutil.cpp – реализация функции strConteins
strutil.h - объявление функции strConteins
*/

int strConteins(char* a, char* str)
{
	int ret= -1;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
		{
			bool f = true;
			int j = 0;
			while (a[j] != '\0')
			{
				if (a[j] != str[i + j])
				{
					f = false;
					break;
				}
				j++;
			}
			if (f)
			{
				ret = i;
				break;
			}
		}
		i++;
	}
	return ret;
}