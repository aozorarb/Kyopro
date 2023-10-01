#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int sum = 1;
  cin >> S;
  // ここにプログラムを追記
for (int i=0;S.size() > i;i++){
  if (S.at(i) == '+'){
  	sum++;
  }
  if (S.at(i) == '-'){
	sum--;
  }
}
  cout << sum << endl;
}