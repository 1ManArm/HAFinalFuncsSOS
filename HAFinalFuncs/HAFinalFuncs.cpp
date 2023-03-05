#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

//Создание массива:
template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//Наполнение массива случайными числами:
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

//Индекс первого вхождения в массив:
int search_index(int arr[], const int length, int index) {
	//Не понял, как внедрить begin = 0
	for (int i = 0; i < length; i++)
		if (arr[i] == index)
			return i;
	return (-1);
}

//Индекс последнего вхождения в массив:
int search_last_index(int arr[], const int length, int index) {
	for (int i = length - 1; i > 0 + 1; i--)
		if (arr[i] == index)
			return i;
	return -1;
}//Не понял, как перегрузить

//Минимальный элемент массива:
template<typename T>
int search_min(T arr, const int length) {
	int min = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] < min) {
			min = arr[i];
		}
	return min;
}

//Максимальный элемент массива:
template<typename T>
int search_max(T arr, const int length) {
	int max = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] > max) {
			max = arr[i];
		}
	return max;
}

//Среднее арифметическое всего массива (SOS!!! ВЫДАЕТ ОШИБКУ C2664):
int mean_value(int arr, const int length)
{
	int avg = 0;
	for (int i = 0; i < length; i++)
		avg += arr[i];
	return avg / length;
}

//Элементы в диапазоне (SOS!!! ВЫДАЕТ ОШИБКУ):
void range(int arr, const int length, int diapStart, int diapEnd) {
	for (int i = 0; i < length; i++)
		if ((arr[i] <= diapStart) && (arr[i] >= diapEnd))
			std::cout << arr << ' ';
}

//Вхождение элемента в массив
//Здесь могла бы быть функция, но я окончательно сгорел, пытаясь разобраться, почему не работают функции выше. Поэтому нужна СРОЧНАЯ ПОМОЩЬ!!!

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 100;
	int arr[size];
	std::cout << "Массив:\n";
	fill_arr(arr, size, -100, 101);
	show_arr(arr, size);
	std::cout << "Введите число из массива -> ";
	std::cin >> n;
	std::cout << search_index(arr, size, n);
	std::cout <<"\n" << search_last_index(arr, size, n);
	std::cout << "\n\n" << search_min(arr, size);
	std::cout << "\n" << search_max(arr, size);
	/*std::cout << "\n\n" << mean_value(arr, size); */ //Выдает ошибку С2664, которую я не знаю, как исправить
	std::cout << "\n\nВведите диапазон -> ";
	int d1, d2;
	std::cin >> d1, d2;
	/*std::cout << range(arr, size, d1, d2);*/ //Выдает ошибку E0167, которую я не знаю, как исправить


	return 0;
}