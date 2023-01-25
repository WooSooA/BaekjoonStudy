#include <iostream>
#include <string>

using namespace std;

int main() {

	int a, b, c;
	int num[10] = { 0 };
	cin >> a;
	cin >> b;
	cin >> c;

	int mul = a * b * c;

	string mul_s = to_string(mul);

	for (int i = 0; i < mul_s.length(); i++) {
		int n = mul_s[i] - '0';
		num[n]++;
		
	}

	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}
}