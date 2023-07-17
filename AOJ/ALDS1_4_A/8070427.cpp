#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int N, Q, n;
  map<int, bool> S;
  cin >> N;
  for(int i=0;i<N;++i) {
    cin >> n;
    S[n] = true;
  }
  cin >> Q;
  int64_t ans = 0;
  for(int i=0;i<Q;++i) {
    cin >> n;
    if(S[n]) ++ans;
  }
  cout << ans << endl;
}



