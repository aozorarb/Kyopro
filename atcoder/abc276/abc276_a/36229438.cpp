#include <iostream>

using namespace std;
int main() {
	int idx = -1;
	string  S;
	cin >> S;
	for(int i=0;i<S.size();i++) {
		if(S[i] == 'a') {
			idx = i + 1;
		}
	}
	cout << idx << endl;

}
