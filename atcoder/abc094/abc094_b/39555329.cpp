#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n, m, x; cin >> n >> m >> x;
  multiset<int> road;
  for(int i=0;i<m;++i) {
    int d; cin >> d;
    road.insert(d);
  }

  int min = 0;
  int left = 0, right = 0;
  // right
  for(auto it=road.lower_bound(x);it != road.end();++it) {
    right++;
  }
  for(auto it=road.begin();it != road.upper_bound(x);++it) {
    left++;
  }
  //cout << left << " " << right << endl;
  min = (right > left ? left : right);
  cout << min << endl;
}
