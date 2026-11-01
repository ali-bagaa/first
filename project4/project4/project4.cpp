#include <iostream>
using namespace std;

int SumBetween(int a, int b);

int main() {
	int a, b;
	cout << "enter a number" << endl;
	cin >> a;
	cout << "enter another number" << endl;
	cin >> b;
	if (a > b) {
		cout << '0';
	}
	else {
		int result = SumBetween(a, b);
		cout << result;
	}
	
	return 0;
}

int SumBetween(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}
