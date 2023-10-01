#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> divided(101);
  int N; cin >> N;
  for(int i=0;i<100;++i) {
    int n = i;
    int cnt = 0;
    while(!(n % 2) && n) {
      n /= 2;
      cnt++;
    }
    divided[i] = cnt;
  }
  int max = -1;
  int idx = -1;
  for(int i=0;i<=N;++i) {
     if(max < divided[i]) {idx = i; max = divided[i];}
  }
  if(idx == 0) cout << 1 << endl;
  else cout << idx << endl;
}
