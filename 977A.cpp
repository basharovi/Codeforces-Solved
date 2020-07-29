#include <iostream>

using namespace std;

int main()
{
    int test, n;
    cin >> n >> test;

    while (test--)
    {

        if (n % 10 == 0)
            n = n / 10;
        else
            n--;
    }

    cout << n << endl;

    return 0;
}
