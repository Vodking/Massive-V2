#include "Starter.hpp"
#include "Exercise_one.hpp"
#include "Exercise_two.hpp"
void Start()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char choice;
	while (true)
	{
		std::cout << "Выберите задание для просмотра \n";
		std::cout << "1 - Первое задание, 2 - Второе задание\n";
		std::cout << "Остальные символы - выход: ";
		std::cin >> choice;
		if (choice == '1')
		{
			Exercise_One();
		}
		else if (choice == '2')
		{
			Exercise_Two();
		}
		else
		{
			break;
		}
	}
	
}
