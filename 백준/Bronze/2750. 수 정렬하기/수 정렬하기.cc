#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n, m;
	
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {

		cin >> m;

		arr[i] = m;

	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}