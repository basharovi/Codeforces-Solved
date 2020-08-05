#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, l = 1;
    cin >> t;

    while (t--)
    {
        long long int a[50];
        long long int b[50];
        long long int move = 0;

        cin >> l;
        for (auto i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        for (auto i = 0; i < l; i++)
        {
            cin >> b[i];
        }

        auto minA = std::min_element(a, a + l);
        auto minB = std::min_element(b, b + l);

        for (auto i = 0; i < l; i++)
        {
            auto sub1 = a[i] - *minA;
            auto sub2 = b[i] - *minB;

            if (sub1 >= sub2)
            {
                move += sub1;
            }
            else
            {
                move += sub2;
            }
        }

        cout << move << endl;
    }
}