#include <iostream>

using namespace std;

int main()
{
    long long int n1, n2;
    cin >> n1 >> n2;

	auto half = n1 / 2;

	if (n1 % 2 != 0)
		half+=1;

    if (n2 <= half)
	    cout << n2 * 2 - 1 << endl;
    else
	    cout << (n2 - half) * 2 << endl;


    return 0;
}