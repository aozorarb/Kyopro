#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isprime(int n) {
  if(n == 2) return true;
  if(n <= 2 || n % 2 == 0) return false;
  if(n == 9) return false;
  for(int i=3;i<=sqrt(n);++i) {
    if(!(n % i)) return false;
  }
  return true;
}

int main() {
  int N; cin >> N;
  int cnt = 0;
  for(int i=0;i<N;++i) {
    int num; cin >> num;
    if(isprime(num)) cnt++;
  }
  cout << cnt << endl;
}

