#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> level(N);
  for(auto &x : level) cin >> x;
  sort(level.begin(), level.end());
  // seem median left and right
  int left = level[N/2-1], right = level[N/2];
  cout << right - left << endl;
}
