#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string S; cin >> S;
  int cnt = 0, ans = 0;
  for(size_t i=0;i<S.size();++i) {
    if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
      cnt++;
    } else {
      cnt = 0;
    }
    if(ans < cnt) ans = cnt;
  }
  cout << ans << endl;
}
