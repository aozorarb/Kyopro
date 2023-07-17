#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool linear_search(vector<int> from, int x) {
  for(auto f : from) {
    if(f == x) return true;
  }
  return false;
}


int main() {
  int N, Q;
  cin >> N;
  vector<int> S(N);
  for(int i=0;i<N;++i) cin >> S[i];
  cin >> Q;
  vector<int> T(Q);
  for(int i=0;i<Q;++i) cin >> T[i];

  int ans = 0;
  for(auto t : T) if(linear_search(S, t)) ++ans;
  cout << ans << endl;
}

    
