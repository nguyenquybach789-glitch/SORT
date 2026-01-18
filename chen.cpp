#include <iostream>
using namespace std;
int main() {
	int a[5];
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < 5; i++) {
		int chen = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > chen) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = chen;
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}