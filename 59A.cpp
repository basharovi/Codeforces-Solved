#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    string word;
    auto count_upper = 0, count_lower = 0;

    cin >> word;

    for (auto i = 0; i < word.length(); i++)
    {
        if (std::isupper(word[i]))
            count_upper++;
        else
            count_lower++;
    }

    if (count_lower >= count_upper)
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    else
        transform(word.begin(), word.end(), word.begin(), ::toupper);

    cout << word << endl;

    return 0;
}
