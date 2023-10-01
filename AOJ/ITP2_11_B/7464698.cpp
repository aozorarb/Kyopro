#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int to_d(vector<int> vec) {
  int res = 0;
  for(int i=0;i<vec.size();++i) res += (1<<vec[i]);
  return res;
}

void print(vector<int> vec){
  if(vec.empty()) {
    cout << to_d(vec) << ':' << endl;
  } else {
    cout << to_d(vec) << ": ";
    size_t size = vec.size();
    for(int i=0;i<size;++i) {
      cout << vec[i] << " \n"[(i == size-1)];
    }
  }
}

bool contain(vector<int> A, vector<int> B) {
    for(vector<int>::iterator it=B.begin();it!=B.end();++it) {
      if(find(A.begin(), A.end(), *it) == A.end()) return false;
    }
  return true;
}

int main() {
  int n; cin >> n;
  int k; cin >> k;
  vector<int> T(k);
  for(int i=0;i<k;++i) cin >> T[i];
  for(int state=0;state<(1<<n);++state) {
    vector<int> S;
    for(int i=0;i<n;++i) if(state & (1<<i)) S.push_back(i);
    if(contain(S, T)) print(S);
  }
}

