#include <iostream>

using namespace std;

int main() {

	string s;
	int t;

	cin >> s;

	int arr[] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < s.length(); i++) {
		t = s[i] - '0';		// char형 int형으로 바꾸어주기
		arr[t]++;
	}

	int sn = arr[6] + arr[9];
	if (sn % 2 == 1) {
		sn += 1;
	}
	sn /= 2;


	arr[6] = sn;
	arr[9] = sn;

	int max = 0;

	for (int i = 0; i < 10; i++) {

		if (arr[i] > max) {
			max = arr[i];
		}

	}
	cout << max;
}