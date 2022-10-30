#include <iostream>
#include <cmath>
using namespace std;

string to_36(int n) {
	string converded;  
	int digit = 0;
	for(int i=2;i>=0;i--) {
		digit = n / pow(36, i);
		if(digit != 0 || !converded.empty()) {
			if(digit < 10) {
				converded += digit + '0';
			} else {
				converded += 'A' + digit - 10;
			}
		}
		n %= (int)pow(36, i);
	}
	if(converded.empty()) converded += '0';
	return converded;
}

int main() {
	int n;
	cin >> n;
	cout << to_36(n) << endl;
}
