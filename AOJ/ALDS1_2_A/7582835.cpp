#include <iostream>

using namespace std;

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void bubbleSort(int A[], int N) {
  int cnt = 0;
  bool flag = true;
  while(flag) {
    flag = false;
    for(int i=N-1;i>=1;--i) {
      if(A[i] < A[i-1]) {
        swap(A[i], A[i-1]);
        flag = true;
        cnt++;
      }
    }
  }
  cout << A[0];
  for(int i=1;i<N;++i) cout << " " << A[i];
  cout << endl << cnt << endl;
}

int main() {
  int N; cin >> N;
  int A[100];
  for(int i=0;i<N;++i) cin >> A[i];
  bubbleSort(A, N);
}


