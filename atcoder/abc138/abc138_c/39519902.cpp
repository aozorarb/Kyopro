#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin >> N;
  vector<double> items(N);
  for(int i=0;i<N;++i) cin >> items[i];
  sort(items.begin(), items.end());
  for(int i=0;i<N-1;++i) {
    double a = *items.begin();
    items.erase(items.begin());
    double b = *items.begin();
    items.erase(items.begin());
    items.push_back((a+b)/2.0);
    sort(items.begin(), items.end());
  }
  cout << items[0] << endl;
}
