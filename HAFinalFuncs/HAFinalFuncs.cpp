#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

//�������� �������:
template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//���������� ������� ���������� �������:
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

//������ ������� ��������� � ������:
int search_index(int arr[], const int length, int index) {
	//�� �����, ��� �������� begin = 0
	for (int i = 0; i < length; i++)
		if (arr[i] == index)
			return i;
	return (-1);
}

//������ ���������� ��������� � ������:
int search_last_index(int arr[], const int length, int index) {
	for (int i = length - 1; i > 0 + 1; i--)
		if (arr[i] == index)
			return i;
	return -1;
}//�� �����, ��� �����������

//����������� ������� �������:
template<typename T>
int search_min(T arr, const int length) {
	int min = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] < min) {
			min = arr[i];
		}
	return min;
}

//������������ ������� �������:
template<typename T>
int search_max(T arr, const int length) {
	int max = arr[0];
	for (int i = 0; i < length; i++)
		if (arr[i] > max) {
			max = arr[i];
		}
	return max;
}

//������� �������������� ����� ������� (SOS!!! ������ ������ C2664):
int mean_value(int arr, const int length)
{
	int avg = 0;
	for (int i = 0; i < length; i++)
		avg += arr[i];
	return avg / length;
}

//�������� � ��������� (SOS!!! ������ ������):
void range(int arr, const int length, int diapStart, int diapEnd) {
	for (int i = 0; i < length; i++)
		if ((arr[i] <= diapStart) && (arr[i] >= diapEnd))
			std::cout << arr << ' ';
}

//��������� �������� � ������
//����� ����� �� ���� �������, �� � ������������ ������, ������� �����������, ������ �� �������� ������� ����. ������� ����� ������� ������!!!

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int size = 100;
	int arr[size];
	std::cout << "������:\n";
	fill_arr(arr, size, -100, 101);
	show_arr(arr, size);
	std::cout << "������� ����� �� ������� -> ";
	std::cin >> n;
	std::cout << search_index(arr, size, n);
	std::cout <<"\n" << search_last_index(arr, size, n);
	std::cout << "\n\n" << search_min(arr, size);
	std::cout << "\n" << search_max(arr, size);
	/*std::cout << "\n\n" << mean_value(arr, size); */ //������ ������ �2664, ������� � �� ����, ��� ���������
	std::cout << "\n\n������� �������� -> ";
	int d1, d2;
	std::cin >> d1, d2;
	/*std::cout << range(arr, size, d1, d2);*/ //������ ������ E0167, ������� � �� ����, ��� ���������


	return 0;
}