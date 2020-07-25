// Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

#include <iostream>
using namespace std;

int main() {
    long long int n, m, a, x, y;
    cin >> n >> m >> a;
    if(n%a == 0){
        x = n/a;
    }
    else x = (n/a) + 1;
    
    if(m%a == 0){
        y = m/a;
    }
    else y = (m/a) + 1;
    
    cout << x * y << endl;
    return 0;
}