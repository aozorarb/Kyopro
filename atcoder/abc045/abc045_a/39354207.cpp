// https://atcoder.jp/contests/abc045/tasks/abc045_a

#include <cstdio>
#include <iostream>

using namespace std;

#define REP(i,n)   for(int i=0; i<(int)(n); i++)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); i++)

const int A_MAX = 100;
const int B_MAX = 100;
const int H_MAX = 100;

int a;
int b;
int h;

void solve() {
  int ans = (a+b) * h / 2;
  printf("%d\n", ans);
}

void input() {
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &h);
}

int main() {
  input();
  solve();
  return 0;
}
