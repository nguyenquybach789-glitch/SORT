#include <iostream>
using namespace std;

void quick_sort(int a[], int l, int r) {
    if (l >= r) return;
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while (i < j) {
        do { i++; } while (a[i] < pivot);
        do { j--; } while (a[j] > pivot);
        if (i >= j) break;
        swap(a[i], a[j]);
    }
    quick_sort(a, l, j);
    quick_sort(a, j + 1, r);
}

int main() {
    int a[] = { 3, 10, 1, 23, 103, 34, 17, 53, 64, 71 };
    int n = sizeof(a) / sizeof(a[0]);
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}