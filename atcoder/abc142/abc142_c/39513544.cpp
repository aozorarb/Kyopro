#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  map<int, int> stu;
  for(int i=1;i<=N;++i) {
    int o; cin >> o;
    stu[o] = i;
  }
  for(int i=1;i<=N;++i) {
    cout << stu[i] << " \n"[(i==N)];
  }
}
