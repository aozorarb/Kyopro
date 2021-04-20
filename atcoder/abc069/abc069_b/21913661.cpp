#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,num;
  cin >> s;
  num = to_string(s.size()-2);
  char fi,en;
  fi = s[0];
  en = s[s.size()-1];
  cout << fi << num << en << endl;
}