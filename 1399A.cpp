#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int t, l = 1;
    cin >> t;

    while (t--)
    {
        cin >> l;
        int a[50];
        string result = "YES";

        for (auto i = 0; i < l; i++)
        {
            cin >> a[i];
        }

        sort(a, a + l);

        while (l-- && l > 0)
        {
            if (a[l] - a[l - 1] > 1)
            {
                result = "NO";
                break;
            }
        }
        cout << result << endl;
    }
}