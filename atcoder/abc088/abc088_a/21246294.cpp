#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,A = 0;
  cin >> N >> A;
  int five = N % 500;
  if (five <= A){
  	cout << "Yes";
  }else{
    cout << "No";
  }
}