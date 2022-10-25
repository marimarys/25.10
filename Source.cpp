#include <iostream>
using namespace std;
int main() {
	// 1 вывести символ # столько раз, сколько указал пользователь
	/*int n, i = 1;
	cin >> n;
	while (i >= n) {
		i++;
		cout << "#";
	}*/
/*	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << '#';
	}*/
	// 2 пользователь ввёл любое целое положительное число, а на экран вывелись числа от введённого до 0
	/*int n;
	cin >> n;
	int i = n;
	while (i >= 0) {
		cout << i << endl;
		i--;
	}*/
	// 3 вывести все числа из диапазона 1-100, которые кратны указанному пользователем числу
	int n;
	cin >> n;
	int i = 1;
	while (i <= 100) {
		if (i % n == 0) {
			cout << i << endl;
		}
		i++;
	}
}