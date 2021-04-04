#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,sum,avg;
  cin >> N;
  vector<int> A(N);
  for (int i;i<N;i++){
    cin >> A.at(i);
    sum+=A.at(i);
  }
  avg = sum/N;
  for (int j;j<N;j++){
    cout << abs(A.at(j) - avg) << endl;
  }
}

