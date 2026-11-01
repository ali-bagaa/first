#include <iostream>
using namespace std;

int digitSum(int n);

int main() {
	int number;
	cout << " input a positive number" << endl;
	cin >> number;
	int output = digitSum(number);
	cout << output;
	return 0;
}
 int digitSum(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
