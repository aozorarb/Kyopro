#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  int ans = 0;  // 買い方が何通りあるか

  // 実際に全ての買い方を試してみて、合計がS円ならカウントアップ
  for (int x : A) {
    for (int y : P) {
      if (x + y == S) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}

