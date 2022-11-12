#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, sub;
	cin >> n >> sub;
	int P[110];
	for(int i=0;i<n;++i) cin >> P[i];
	for(int i=0;i<n;++i) {
		if(P[i] == sub) {
			cout << i + 1;
			break;
		}
	}


}
