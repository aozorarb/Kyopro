#include <iostream>

using namespace std;

int main() {
	int n;
	string s, t = "";
	cin >> n >> s;
	for(int i=0;i<n;i++) {
		char c = s[i];
		for(int j=0;j<t.size();j++) {
			if(t[j] == c) t.erase(j, 1);
		}
		t += c;
	}
	cout << t << endl;
	return 0;
}
