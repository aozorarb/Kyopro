#include <iostream>
#include <vector>
#include <climits>

using namespace std;

template<class T> void chmax(T &A, T B) {
  if(A < B) A = B;
}

template<class T> void chmin(T &A, T B) {
  if(A > B) A = B;
}

int main() {
  int N; cin >> N;
  vector<int> R(N);
  for(int i=0;i<N;++i) cin >> R[i];
  int min = R[0];
  int max = INT_MIN;
  for(int i=1;i<N;++i) {
    chmax(max, R[i] - min);
    chmin(min, R[i]);
  }
  cout << max << endl;
}

