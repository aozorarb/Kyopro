#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B,C,minim,maxe,difference;
  cin >> A >> B >> C;
  minim = min(A,min(B,C));
  maxe = max(A,max(B,C));
  difference = maxe-minim;
  cout << difference << endl;
}

