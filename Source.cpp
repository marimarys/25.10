#include <iostream>
using namespace std;
int main() {
	// 1 ������� ������ # ������� ���, ������� ������ ������������
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
	// 2 ������������ ��� ����� ����� ������������� �����, � �� ����� �������� ����� �� ��������� �� 0
	/*int n;
	cin >> n;
	int i = n;
	while (i >= 0) {
		cout << i << endl;
		i--;
	}*/
	// 3 ������� ��� ����� �� ��������� 1-100, ������� ������ ���������� ������������� �����
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