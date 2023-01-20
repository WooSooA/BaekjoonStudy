#include <iostream>

using namespace std;

int main() {	

	int n, w, h;

	cin >> n;

	int** per = new int*[n];
	int* rank = new int[n];
	
	for (int i = 0; i < n; i++) {
		per[i] = new int[2];
		rank[i] = 1;

		for (int j = 0; j < 2; j++) {
			cin >> per[i][j];
			
		}
	}

	for (int i = 0; i < n; i++) {
			
		for (int j = 0; j < n; j++) {
			if (per[i][0] < per[j][0] && per[i][1] < per[j][1]) {
				rank[i] ++;
			}
		}

	}

	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}


	// 메모리 해제
	for (int i = 0; i < n; i++)
		delete[]per[i];
	delete[] per;
}