/*Вариант 11
Дан массив размера N (N — четное число).
Поменять местами его первый элемент со вторым,
третий — с четвертым и т. д.
*/
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	size_t n;
	cout << "Введите чётную длину массива n>0: ";
	cin >> n;
	if (n % 2 != 0) {
		cerr << "Не соответствует условию!";
		return 1;
	}
	int* a = new int[n];
	for (size_t i = 0; i < n; i++) {
		cout << "Введите элемент массива: ";
		cin >> a[i];
	}

	for (size_t i = 0; i < n - 1; i += 2) {
		size_t f = a[i];
		a[i] = a[i + 1];
		a[i + 1] = f;
	}
	for (size_t i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
