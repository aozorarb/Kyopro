#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int no = 0;
void print(vector<int> vec) {
  if(vec.empty()) {
    cout << no << ':' << endl;
  } else {
    cout << no << ": ";
    size_t size = vec.size();
    for(int i=0;i<size;++i) {
      cout << vec[i] << " \n"[(i == size-1)];
    }
  }
  ++no;
}

int main() {
  int n; cin >> n;
  // TODO: 2**n ビットを列挙する
  for(int i=0;i<(1<<n);++i) {
    vector<int> S;
    for(int j=0;j<n;++j) {
      if(i & (1<<j))S.push_back(j);
    }
    print(S);
  }
}

