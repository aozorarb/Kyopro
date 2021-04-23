#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,res =0;
  cin >> N;
  vector<int> A(N);
  
  for (int i=0;i<N;i++)cin >> A.at(i);
   
  while(true){//操作
    bool flg=false;
    for (int i=0;i<N;i++){
      if (A.at(i) %2 == 1)flg = true;
      else A.at(i)=A.at(i)/2; 
    }
    if(flg)break;
    else res++;
  }
  cout << res << endl;
}