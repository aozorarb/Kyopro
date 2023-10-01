#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,A,B = 0;
  cin >> N >> A >> B;
  int T = N * A;
  if (T < B){
	cout << T << endl;
  }else{
    cout << B << endl;
  }
}