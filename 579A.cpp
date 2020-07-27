#include <iostream>
using namespace std;

int main() {

	int n;
	auto count = 0;
	cin >> n;

	while (n >= 1)
	{
		if (n % 2 == 0) 
			n = n / 2;
		else {
			count++; n--;
		}
	}

	cout << count << endl;
	
	return 0;
}