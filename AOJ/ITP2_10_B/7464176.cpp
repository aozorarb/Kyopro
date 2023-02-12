#include <iostream>
#include <bitset>
using namespace std;
int main() {
  unsigned int x, y; cin >> x >> y;
  bitset<32> bitx(x);
  bitset<32> bity(y);
  cout << (bitx & bity) << endl;
  cout << (bitx | bity) << endl;
  cout << (bitx ^ bity) << endl;
}

