#include <iostream>

using namespace std;

int main()
{
    int ageLimak, agebob, year = 0;
    cin >> ageLimak >> agebob;

    while (1)
    {
        ageLimak *= 3;
        agebob *= 2;
        year++;

        if (ageLimak > agebob)
        {
            break;
        }
    }

    cout << year << endl;

    return 0;
}
