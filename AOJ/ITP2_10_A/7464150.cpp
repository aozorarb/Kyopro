#include <iostream>
#include <bitset>
using namespace std;
int main() {
  unsigned int x; cin >> x;
  bitset<32> bits(x);
  cout << bits << endl;
  cout << ~bits << endl;
  cout << (bits << 1) << endl;
  cout << (bits >> 1) << endl;
}

