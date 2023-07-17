#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  vector<int> S(N);
  for(int i=0;i<N;++i) cin >> S[i];
  cin >> Q;
  vector<int> T(Q);
  for(int i=0;i<Q;++i) cin >> T[i];
  sort(S.begin(), S.end());

  int ans = 0;
  for(auto t : T) if(binary_search(S.begin(), S.end(), t)) ++ans;
  cout << ans << endl;
}

    
