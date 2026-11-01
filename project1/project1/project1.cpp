#include <iostream>
using namespace std;

int main() {
	int n, sum=0;
	double avg;
	cout << "enter a number" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	avg = static_cast<double>(sum) / n;
	cout << "sum is: " << sum << endl;
	cout << "average is: " << avg << endl;

	return 0;
}
//--------------------------------------------------------------------------