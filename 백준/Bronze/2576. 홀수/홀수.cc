#include <iostream>

using namespace std;

int main() {

	int n;
	int hol[7] = { -1 };
	int hap = 0;
	int j = 0;

	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 != 0) {
			hol[j] = n;
			hap += n;
			j++;
		}
	}

	if (hol[0] == -1) {
		cout << "-1" << endl;
		
		return 0;
	}

	int min = hol[0];

	for (int i = 0; i < 7; i++) {
		if (hol[i] > 0) {
			
			if (min > hol[i])
				min = hol[i];
		}
	}

	cout << hap << endl;
	cout << min << endl;

}