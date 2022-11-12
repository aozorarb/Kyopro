#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check(vector<string> S, int N) {
	// first
	for(int i=0;i<N;++i) {
		if(!(S[i][0] == 'H' || S[i][0] == 'D' || S[i][0] == 'C' || S[i][0] == 'S')) return false;
	}
	//second
	for(int i=0;i<N;++i) {
		if(!((S[i][1] >= '2' && S[i][1] <= '9') || S[i][1] == 'A' || S[i][1] == 'T' || S[i][1] == 'J' ||S[i][1] == 'Q' || S[i][1] == 'K')) return false;
	}
	//third
	for(int i=0;i<N;++i) {
		for(int j=i+1;j<N;++j) {
			if(S[i][0] == S[j][0] && S[i][1] == S[j][1]) return false;
		}
	}
	return true;
}

int main() {
	int N;
	cin >> N;
	vector<string> S(N);
	for(int i=0;i<N;++i) cin >> S[i];
	sort(S.begin(), S.end());
	if(check(S, N)) cout << "Yes" << endl;
	else cout << "No" << endl;

}
