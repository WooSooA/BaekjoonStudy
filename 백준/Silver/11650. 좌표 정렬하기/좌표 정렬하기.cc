#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector <pair<int, int>> v;
	int n;
	int x, y;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
}