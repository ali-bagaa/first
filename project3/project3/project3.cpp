#include <iostream>
using namespace std;

int sumOfSquare(int n);
int sumOfOdd(int n);
int sumOfEven(int n);

int main() {
	int n;
	cout << "enter a positive number" << endl;
	cin >> n;
	if (n <= 0) {
		cout << "enter a positive number" << endl;
	}

	int s1 = sumOfEven(n);
	int s2 = sumOfOdd(n);
	int s3 = sumOfSquare(n);

	cout << " sum of even number: " << s1 << endl;
	cout << " sum of odd number: " << s2 << endl;
	cout << " sum of square number: " << s3 << endl;


	return 0;
}

int sumOfEven(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}

int sumOfOdd(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}

int sumOfSquare(int n) {
	int sum = 0;
	int total = 0;
	for (int i = 1; i <= n; i++) {
		total = i * i;
		sum += total;
	}
	return sum;
}

