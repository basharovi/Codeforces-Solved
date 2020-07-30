#include <iostream>

using namespace std;

int count_move(const int a, const int b)
{
    if (a < b)
        return b - a;

    if (a % b == 0)
        return 0;

    return (a / b + 1) * b - a;
}

int main()
{
    int a, b;
    int test, count = 0;

    cin >> test;

    while (test--)
    {
        cin >> a >> b;

        cout << count_move(a, b) << endl;
    }

    return 0;
}
