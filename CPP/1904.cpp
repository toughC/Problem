#include<iostream>

using namespace std;

long long num[1000001];

int main(void) {

	long long  n = 0;

	cin >> n;

	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i <= n; i++) {
		num[i] = (num[i - 1] % 15746 + num[i - 2] % 15746) % 15746;
	}

	cout << num[n];
	return 0;


}
