#include <algorithm>
#include <iostream>
using namespace std;

int main() {

	int numbers[4];
	
	cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
	
	sort(numbers, numbers + 4, greater<int>());

	auto x = numbers[0] - numbers[1];
	auto y = numbers[2] - x;
	auto z = numbers[0] - (x + y);
	
	cout << x << " " << y  << " " << z << endl;
	
	return 0;
}