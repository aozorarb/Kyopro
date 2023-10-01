#include <iostream>
#include <map>
using namespace std;

int main() {
  int q; cin >> q;
  map<string, int> M;
  int op, v;
  string key;
  string l, r;
  for(int i=0;i<q;++i) {
    cin >> op;
    if(op == 0) {
      cin >> key >> v;
      M[key] = v;
    } else if(op == 1) {
      cin >> key;
      if(M.find(key) != M.end()) cout << M[key] << endl;
      else cout << 0 << endl;
    } else if(op == 2) {
      cin >> key;
      M.erase(key);
    } else if(op == 3) {
      cin >> l >> r;
      for(map<string, int>::iterator it=M.lower_bound(l);it!=M.upper_bound(r);++it) {
        cout << it->first << " " << it->second << endl;
      }
    }
  }
}

