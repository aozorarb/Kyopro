#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<pair<int,int> >A;
	for (int i=0;i<N;i++){
		int score;
		cin >> score;
		A.push_back(make_pair(score,i+1));
	}
	sort(A.begin(), A.end());
	//reverse(A.begin(), A.end());
	// for (int i=0;i<N;i++){
	// 	cout << "firstの値は:" << A[i].first << "secondの値は" << A[i].second << endl;
	// }
	cout << A[N-2].second << endl;


}