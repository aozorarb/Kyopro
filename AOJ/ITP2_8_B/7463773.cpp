#include <iostream>
#include <map>
using namespace std;

int main() {
  int q; cin >> q;
  map<string, int> M;
  int op, v;
  string key;
  for(int i=0;i<q;++i) {
    cin >> op >> key;
    if(op == 0) {
      cin >> v;
      M[key] = v;
    } else if(op == 1) {
      cout << M[key] << endl;
    } else {
      M.erase(key);
    }
  }
}

