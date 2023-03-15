#include <iostream>
#include <functional>
using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  int n, k; cin >> n >> k;
  foreach_comb(n, k, [=](int *idx) {
    int total = 0;
    for(int i=0;i<k;++i) total += (1<<idx[i]);
    cout << total << ":";
    for(int i=0;i<k;++i) cout << " " << idx[i];
    cout << endl;
  });
}

