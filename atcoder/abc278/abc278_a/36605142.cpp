#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	queue<int> A;
	for(int i=0;i<N;++i) {
		int a;
		cin >> a;
		A.push(a);
	}
	for(int i=0;i<K;++i) {
		A.pop();
		A.push(0);
	}
	cout << A.front();
  A.pop();
	for(int i=1;i<N;++i) {
		cout << " " << A.front();
      A.pop();
	}
	cout << endl;
}
