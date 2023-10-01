#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
  long long N, K; cin >> N >> K;
  if(!(N % K)) cout << 0 << endl;
  else {
    N %= K;
    while(abs(N - K) < N) N = abs(N - K);
    cout << N << endl;
  }
}
