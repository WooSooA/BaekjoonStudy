#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;
	int arr[5];
	int avg = 0;
	int middle = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		arr[i] = n;
	}

	sort(arr, arr + 5);

	for (int i = 0; i < 5; i++) {
		avg += arr[i];
	}

	avg /= 5;
	middle = arr[2];

	cout << avg << endl;
	cout << middle << endl;
}