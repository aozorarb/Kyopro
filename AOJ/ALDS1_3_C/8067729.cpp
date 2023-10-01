#include <iostream>
#include <list>
using namespace std;

void delete_key(list<int> &ls, int key) {
  for(auto it=ls.begin();it!=ls.end();it++) {
    if(*it == key) {
      ls.erase(it);
      break;
    }
  }
}

void show(const list<int> &ls) {
  cout << *ls.begin();
  auto it = ++ls.begin();
  for(;it!=ls.end();++it) {
    cout << " " << *it;
  }
  cout << endl;
}

int main() {
  int n, x;
  list<int> ls;
  cin >> n;
  string cmd;
  for(int i=0;i<n;++i) {
    cin >> cmd;
    if(cmd == "insert") {
      cin >> x;
      ls.push_front(x);
    } else if(cmd == "delete") {
      cin >> x;
      delete_key(ls, x);
    } else if(cmd == "deleteFirst") ls.erase(ls.begin());
      else if(cmd == "deleteLast")  ls.erase(--ls.end());
  }
  show(ls);

}


