#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C,D = 0;
  cin >> A >> B >> C >> D;
  int L = A+B;
  int R = C+D;
  if (L == R){
  	cout << "Balanced" << endl;
  }else if (L > R){
  	cout << "Left" << endl;
  }else{
    cout << "Right" << endl;
  }
}