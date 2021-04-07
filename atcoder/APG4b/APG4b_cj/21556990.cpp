#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,sum;
  cin >> N;
  vector<int> A(N);
  for (int i;i<N;i++){
    cin >> A.at(i);
    sum+=A.at(i);
  }
  int avg = sum/N;
  for (int i;i<N;i++){
    cout << abs(abs(A.at(i)) - avg) << endl;
  }
}

