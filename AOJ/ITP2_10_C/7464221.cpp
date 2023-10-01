// for C++11
#include <iostream>
#include <bitset>
using namespace std;
int main() {
  bitset<64> bits(0);
  int q; cin >> q;
  int op, idx;
  for(int i=0;i<q;++i) {
    cin >> op;
    switch(op) {
      case 0:
        cin >> idx;
        cout << bits[idx] << endl;
        break;
      case 1:
        cin >> idx;
        bits.set(idx);
        break;
      case 2:
        cin >> idx;
        bits.reset(idx);
        break;
      case 3:
        cin >> idx;
        bits.flip(idx);
        break;
      case 4:
        cout << (bits.count() == bits.size()) << endl;
        break;
      case 5:
        cout << bits.any() << endl;
        break;
      case 6:
        cout << bits.none() << endl;
        break;
      case 7:
        cout << bits.count() << endl;
        break;
      case 8:
        cout << bits.to_ullong() << endl;
    }
  }
}

