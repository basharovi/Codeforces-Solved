#include <iostream>
using namespace std;

int main() {
	string input;
	string output;
	
	auto space = false;
	cin >> input;
	
	for (auto i = 0; i < input.length(); i++) {
		
		if (input[i] == 'W' && input[i + 1] == 'U' && input[i + 2] == 'B') {
			i += 2;
			if (space) {
				output += ' ';
			}
		}
		else {
			space = true;
			output += input[i];
		}
	}

	cout << output << endl;
	
	return 0;
}