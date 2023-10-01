#include <bits/stdc++.h>
using namespace std;

int main(){
  int cost = 700;
  string s;
  cin >> s;
  for(int i=0;i<3;i++){
    if(s[i] == 'o')cost+=100;
  }
  cout << cost << endl;
}