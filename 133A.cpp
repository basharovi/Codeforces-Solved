#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str.find('H') != string::npos)
        cout << "YES" << endl;
    else if (str.find('Q') != string::npos)
        cout << "YES" << endl;
    else if (str.find('9') != string::npos)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}