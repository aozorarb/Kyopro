#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
bool flag = false;
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  for(int i=0;i<5;i++){//if data index equal 0,refarence only i+1 number
    int after = i+1;
    int befor = i-1;
    if (i==0){
      continue;
    }
    if (i==4){
      break;
    }
    if(data.at(i) == data.at(befor) || data.at(i) == data.at(after)){
      flag = true;
      break;
    }
  }
  if (flag ==true){
    cout << "YES" << endl;
  }else{
	cout << "NO" << endl;
  }
}

