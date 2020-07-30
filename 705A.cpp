#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string result = "I hate";

    for (auto i = 1; i < n; i++)
    {
        result += " that";

        if (i % 2 == 0)
            result += " I hate";
        else
            result += " I love";
    }

    cout << result << " it" << endl;
}