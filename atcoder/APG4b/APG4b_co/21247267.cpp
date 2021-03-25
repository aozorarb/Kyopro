#include <bits/stdc++.h>
using namespace std;

int main() {
  int p,price,N;
  string test;
  cin >> p;
  if (p == 1){
  	cin >> price >> N;
    cout << price * N << endl;
  }else if (p == 2){
    cin >> test >> price >> N;
    cout << test << "!" << endl;
    cout << price * N << endl;
  }
}

