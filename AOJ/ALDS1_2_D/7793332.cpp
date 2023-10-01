#include <iostream>
#include <vector>
using namespace std;
unsigned int cnt = 0;

void insertion_sort(vector<int> &A, int N, int g) {
  for(int i=g;i<N;++i) {
    int v = A[i];
    int j = i - g;
    while(j >= 0 && A[j] > v) {
      A[j+g] = A[j];
      j = j - g;
      ++cnt;
    }
    A[j+g] = v;
  }
}


void puts(const vector<int> &vec) {
    size_t size = vec.size();
    if(size == 0) return;
    for(int i=0;i<size;++i) {
      std::cout << vec[i] << " \n"[(i == size-1)];
    }
}

void shell_sort(vector<int> &A, int N) {
  int m = 0, d = 1;
  while(d <= N) {
    d = d * 3 + 1;
    ++m;
  }
  vector<int> g(m);
  g[m-1] = 1;
  for(int i=m-2;i>=0;--i) g[i] = g[i+1] * 3 + 1;
  for(int i=0;i<m;++i) insertion_sort(A, N, g[i]);
  cout << m << endl;
  puts(g);
  cout << cnt << endl;
  puts(A);
}

int main() {
  int N; cin >> N;
  vector<int> vec(N);
  for(int i=0;i<N;++i) cin >> vec[i];
  shell_sort(vec, N);
}

