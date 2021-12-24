#include <bits/stdc++.h>
using namespace std;

int main() {
 int A,B,C,X,counter = 0;
  cin >> A >> B >> C >> X;
  for (int i = 0;i<(A+1);i++){
    for(int l=0;l<(B+1);l++){
      for(int k=0;k<(C+1);k++){
        int sum = 500 * i + 100 * l + 50 * k;
        if (sum == X)counter++;
      }
    }
  }
  cout << counter << endl;
  return 0;
}