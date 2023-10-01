#include <bits/stdc++.h>
using namespace std;

int main(){
  int count;
  string S;
  cin >> S;
  if(S[0] == '1')count++;
  if(S[1] == '1')count++;
  if(S[2] == '1')count++;
  cout << count << endl;
}