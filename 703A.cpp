#include <iostream>

using namespace std;

int main()
{
    int t, n1, n2, count1 = 0, count2 = 0;
    cin >> t;

    while (t--)
    {
        cin >> n1 >> n2;
        if (n1 > n2)
            count1++;
        if (n2 > n1)
            count2++;
    }

    if (count1 > count2)
        cout << "Mishka" << endl;
    else if (count2 > count1)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
}