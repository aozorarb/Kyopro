#include <iostream>
#define SWAP(a, b) ((a != b) && (a+=b, b=a-b, a-=b))
using namespace std;

int gcd(int x, int y) {
  if(x < y) SWAP(x, y);
  while(y > 0) {
    x %= y;
    if(x < y) SWAP(x, y);
  }
  return x;
}

int main() {
  int x, y; cin >> x >> y;
  cout << gcd(x, y) << endl;
}

