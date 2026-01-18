#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		int min = a[i];
		for (int j = i + 1; j < 10; j++)
			if (a[j] < a[i]) {
				swap(a[j], a[i]);
			}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}