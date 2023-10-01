#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int max = 0;
  int N; cin >> N;
  vector<int> H(N);
  for(int i=0;i<N;++i) cin >> H[i];
  for(int i=0;i<N;++i) {
    int cnt = 0;
    for(int pos=i;i<N-1;++i) {
      if(H[i] >= H[i+1]) ++cnt;
      else break;
    }
    if(max < cnt) max = cnt;
  }
  cout << max << endl;
}
