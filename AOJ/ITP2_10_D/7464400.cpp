// for C++11
#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
int main() {
  bitset<64> bits(0);
  int n; cin >> n;
  int tmp;
  vector<bitset<64> > mask(n);
  for(int i=0;i<n;++i) {
    int k; cin >> k;
    for(int j=0;j<k;++j) {
      cin >> tmp;
      mask[i].set(tmp);
    }
  }

  int q; cin >> q;
  int op, idx;
  for(int i=0;i<q;++i) {
    cin >> op >> idx;;
    switch(op) {
      case 0:
        cout << bits[idx] << endl;
        break;
      case 1:
        bits |= mask[idx];
        break;
      case 2:
        bits &= ~mask[idx];
        break;
      case 3:
        bits ^= mask[idx];
        break;
      case 4:
        cout << ((bits & mask[idx]) == mask[idx]) << endl;
        break;
      case 5:
        cout << ((bits & mask[idx]) != 0) << endl;
        break;
      case 6:
        cout << ((bits & mask[idx]) == 0) << endl;
        break;
      case 7:
        cout << (bits & mask[idx]).count() << endl;
        break;
      case 8:
        cout << (bits & mask[idx]).to_ullong() << endl;
    }
  }
}

