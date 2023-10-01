// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <cstdio>

using namespace std;

#define REP(i,n)   for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); i++)

const int A_MAX = 10;
const int B_MAX = 10;
const int C_MAX = 10;

int A, B, C;

void solve() {
  bool cond = false;
  int seven = 0, five = 0;
  if(A == 5) ++five;
  if(A == 7) ++seven;
  if(B == 5) ++five;
  if(B == 7) ++seven;
  if(C == 5) ++five;
  if(C == 7) ++seven;
  if(five == 2 && seven == 1) cond = true;
  puts(cond ? "YES" : "NO");
}

void input() {
  scanf("%d%d%d", &A, &B, &C);
}

int main() {
  input();
  solve();
  return 0;
}
