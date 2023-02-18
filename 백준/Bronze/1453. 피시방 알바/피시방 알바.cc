#include <iostream>

using namespace std;

int main() {

	int n, m;
	int count = 0;

	cin >> n;

	int per[100] = {};
	
	for (int i = 0; i < n; i++) {

		cin >> m;
		per[i] = m;


		for (int j = 0; j< i; j++) {
		
			if (per[i] == per[j]) {
				count++;
				break;
			}		

		}

	}
	

	cout << count << endl;
}