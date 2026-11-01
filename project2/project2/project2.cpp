#include <iostream>
using namespace std;

	int sumTo (int n);
	int main() {
		int number;
		do{
			cout << "input a number above zero" << endl;
			cin >> number;
		} while (number <= 0);
			int total = sumTo(number);
			cout << "the total is: " << total;
		
		return 0;
	}

	int sumTo(int n) {
		int result = 0;
		for (int i = 1; i <= n; i++) {
		 result = result + i;
		}
		return result;
	}