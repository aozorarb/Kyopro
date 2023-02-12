#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  set<int> A, B, C;
  int tmp;
  for(int i=0;i<n;++i) {
    cin >> tmp;
    A.insert(tmp);
  }
  cin >> m;
  for(int i=0;i<m;++i){
    cin >> tmp;
    B.insert(tmp);
  }
  set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(C, C.end()));
  for(set<int>::iterator it=C.begin();it!=C.end();++it) {
    cout << *it << endl;
  }
}

