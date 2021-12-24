#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int>A(N);
  for (int i=0;i<N;i++){cin >> A.at(i);}
  //判定部分
  bool flg = true;
  int count = 0;
  while (true) {
    for (int i=0;i<N;i++){
      if (A.at(i) % 2 == 0){
        A.at(i) /= 2;
      }else{flg = false;}
    }
    if(flg){count++;}else{break;}
  }
  cout << count << endl;
}