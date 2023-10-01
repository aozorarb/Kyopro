#include <iostream>

using namespace std;

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int A[100];

void selection_sort(int N) {
  int cnt = 0;
  for(int i=0;i<N;++i) {
    int minj = i;
    for(int j=i;j<N;++j) {
      if(A[j] < A[minj]) {
        minj = j;
      }
    }
    if(A[i] != A[minj]) cnt++;
    swap(A[i], A[minj]);
  }
  cout << A[0];
  for(int i=1;i<N;++i) {
    cout << " " << A[i];
  }
  cout << endl << cnt << endl;
}

int main() {
  int N; cin >> N;
  for(int i=0;i<N;++i) cin >> A[i];
  selection_sort(N);
}

