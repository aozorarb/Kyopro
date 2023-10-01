#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string S; cin >> S;
  sort(S.begin(), S.end());
  bool flg = true;
  for(char c = 'a';c <= 'z'; ++c) {
    if(S.find(c) == string::npos) {
      cout << c << endl;
      flg = false;
      break;
    }
  }
  if(flg) cout << "None" << endl;
}
