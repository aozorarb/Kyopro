#include <stdio.h>

void insertSort(int N, int arr[]) {
  for (int i=0;i<N;++i) printf("%d%c", arr[i], " \n"[(i == N-1)]);
  for (int i=1;i<N;++i) {
    int cur = i - 1, v = arr[i];
    while (cur >= 0 && arr[cur] > v) {
      arr[cur + 1] = arr[cur];
      cur--;
    }
    arr[cur + 1] = v;
    for (int i=0;i<N;++i) printf("%d%c", arr[i], " \n"[(i == N-1)]);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  int arr[101];
  for (int i=0;i<N;++i) {
    scanf("%d", &arr[i]);
  }
  insertSort(N, arr);
}

