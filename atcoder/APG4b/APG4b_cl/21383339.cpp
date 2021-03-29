#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,A,num,sum;
  string op;
  cin >> N >> A;
  sum = A;
  // ここにプログラムを追記
  for (int i=1;N>=i;++i){
    cin >> op >> num;
    if (op == "+"){
		sum = sum+num;
    }else if (op == "-"){
    	sum = sum-num;
    }else if (op == "*"){
    	sum = sum*num;
    }else if (num != 0 && op == "/"){
    	sum = sum/num;
    }else{
		cout << "error" << endl;
        break;
    }
  cout << i << ":" << sum << endl;  
  } 
}

