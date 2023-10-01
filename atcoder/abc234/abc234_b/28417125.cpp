#include<bits/stdc++.h>
using namespace std;

int main(){
	int N; cin >> N;
	vector<int> x(N),y(N);
	for(int i=0; i<N; i++) cin >> x[i] >> y[i];
	double ans = 0;
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			int X = x[i]-x[j], Y = y[i]-y[j];
			ans = max(ans,sqrt(X*X+Y*Y));
		}
	}
	cout << fixed << setprecision(10) << ans << endl;
}

