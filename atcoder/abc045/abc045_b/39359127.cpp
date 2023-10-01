#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

int main() {
  string A, B, C;
  cin >> A >> B >> C;
  char turn = 'a', ans;
  while(true) {
    switch(turn) {
      case 'a':
        if(A.empty()) {ans = 'A'; goto EL;}
        turn = A[0];
        A.erase(A.begin());
        break;
      case 'b':
        if(B.empty()) {ans = 'B'; goto EL;}
        turn = B[0];
        B.erase(B.begin());
        break;
      case 'c':
        if(C.empty()) {ans = 'C'; goto EL;}
        turn = C[0];
        C.erase(C.begin());
        break;
    }
    // cout << A << "\t" << B << "\t" << C << endl;
  }
EL:
  //cout << A << "\t" << B << "\t" << C << endl;
  printf("%c\n", toupper(ans));
}
