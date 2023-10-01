#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int to_d(vector<int> vec) {
  int res = 0;
  for(vector<int>::iterator it=vec.begin();it!=vec.end();++it) res += (1<<*it);
  return res;
}

void print(vector<int> vec){
  cout << to_d(vec) << ":";
    if(!vec.empty()) for(int i=0;i<vec.size();++i) {
       cout << " " << vec[i];
    }
  cout << endl;
}


int main() {
  int n; cin >> n;
  int k; cin >> k;
  vector<int> T(k);
  for(int i=0;i<k;++i) cin >> T[i];
  // Tの部分集合を空集合含めて出力する
  for(int state=0;state<(1<<k);++state) {
    vector<int> S;
    for(int i=0;i<k;++i) {
      if(state & (1<<i)) S.push_back(T[i]);
    }
    print(S);
  }
}

