#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
    int *a = new int[n];

	for (int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}

	cout << "Before Sorting ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;

	for (int i = 0 ; i < n - 1 ; i++) {
		int cnt = 0;
		for (int j = 0 ; j <= n - 2 - i ; j++) {
			if (a[j] > a[j + 1]) {
				cnt++;
				a[j] = (a[j] + a[j + 1]) - (a[j + 1] = a[j]);
			}
		}

		if (cnt == 0) {
			break;
		}
	}

	cout << "After Sorting ";
	for (int i = 0 ; i < n ; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}