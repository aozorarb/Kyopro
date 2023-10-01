#include <stdio.h>

int main() {
  int H,W,R,C;
  scanf("%d%d%d%d", &H, &W, &R, &C);
  int ans = 0;
  if (R != 1) ans++;
  if (R != H) ans++;
  if (C != 1) ans++;
  if (C != W) ans++;
  printf("%d\n", ans);
  return 0;
}
