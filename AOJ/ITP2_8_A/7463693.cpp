#include <iostream>
#include <map>
using namespace std;

int main() {
  int q; cin >> q;
  map<string, int> M;
  int op, v;
  string key;
  for(int i=0;i<q;++i) {
    cin >> op;
    if(op == 0) {
      cin >> key >> v;
      M[key] = v;
    } else {
      cin >> key;
      cout << M[key] << endl;
    }
  }
}

