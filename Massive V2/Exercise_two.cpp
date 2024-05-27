#include "Exercise_two.hpp"

void Exercise_Two()
{
	const int row = 4;
	const int col = 4;
	int num;

	int arr[row][col];

	std::cout << "¬ведите число дл€ начала массива: ";
	std::cin >> num;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = num;
			std::cout << arr[i][j] << "\t";
			num++;
		}
		std::cout << "\n";
	}
}
