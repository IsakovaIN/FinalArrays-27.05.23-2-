#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	setlocale(LC_ALL, "Russian");
		int n, m;

		//Задача 1. Сортировка первых 5-ти элементов
		/*std::cout << "Задача 1.\nИзначальный массив:\n";
		const int size1 = 10;
		int arr1[size1];
		srand(time(NULL));
		for (int i = 0; i < size1; i++) {
			arr1[i] = rand() % (10 + 1 - 1) + 1;
			std::cout << arr1[i] << ' ';
		}
		std::cout << std::endl;
		//пузырьковая сортировка
		for (int i = 5 - 1; i > 0; i--) // ограничиваем 5 элементами, где 5-1, если все элементы size - 1.
			for (int j = 0; j < i; j++)
				if (arr1[j] > arr1[j + 1])
					std::swap(arr1[j], arr1[j + 1]);

		std::cout << "Итоговый массив: \n";
		for (int i = 0; i < size1; i++)
			std::cout << arr1[i] << ' ';
		std::cout << "\n\n";*/

		//Задача 2. Температура в январе. Средняя температура.
		std::cout << "Задача 2.\nТемпература за каждый день января -> ";
		const int size2 = 31;
		int arr2[size2];
		int sum = 0;
		
		srand(time(NULL));
		for (int i = 0; i < size2; i++) {
			arr2[i] = rand() % (-1 + 30 + 1) - 30; //[-30...-1]
			std::cout << arr2[i] << ", ";
			sum += arr2[i];
		}
		std::cout << "\b\b.\n";

		std::cout << "Введите число -> ";
		std::cin >> n;
		int counter = 0;

		for (int i = 0; i < size2; i++)
			if (arr2[i] < n)
				counter++;
		std::cout << "Средняя температура за январь: " << sum / (double)size2 << std::endl;
		std::cout << "Количество дней, когда температура " << "опускалась ниже " << n << " градусов: " << counter << std::endl;


	return 0;
}