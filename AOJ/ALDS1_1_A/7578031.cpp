#include <iostream>
using namespace std;

void insert_sort(int A[], int N) {
  for(int i=1;i<N;++i) {
    for(int j=0;j<N;++j) {
      cout << A[j] << " \n"[(j == N-1)];
    }
    int v = A[i];
    int j = i-1;
    while(j>=0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
  }
    for(int j=0;j<N;++j) {
      cout << A[j] << " \n"[(j == N-1)];
    }
}

int main() {
  int N; cin >> N;
  int A[100];
  for(int i=0;i<N;++i) cin >> A[i];
  insert_sort(A, N);
}



