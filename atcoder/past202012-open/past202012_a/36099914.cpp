#include <iostream>

using namespace std;

int main() {
	string s, ans = "draw";
	cin >> s;
	for(int i=0;i<3;i++) {
		if(s[i] == s[i+1] && s[i+1] == s[i+2]) {
			if(s[i] == 'x') ans = 'x';
			else ans = 'o';
		}
	}
	cout << ans << endl;
	return 0;
}
