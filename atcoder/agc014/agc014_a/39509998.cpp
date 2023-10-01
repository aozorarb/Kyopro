#include <iostream>
using namespace std;

int main() {
  int A, B, C; cin >> A >> B >> C;
  if(A == B && B == C && A > 1) {cout << -1 << endl; return 0;}
  int oA, oB, oC, cnt = 0;
  while(!(A & 1) && !(B & 1) && !(C & 1)) {
    oA = B/2 + C/2;
    oB = A/2 + C/2;
    oC = A/2 + B/2;
    A = oA; B = oB; C = oC;
    cnt++;
  }
  cout << cnt << endl;
}
