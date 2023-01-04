#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &v) {
    size_t size = v.size();
    for(int i=0;i<size;++i) cout << v[i] << " \n"[(i == size -1)];
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n), N(n), P(n);
    for(int i=0;i<n;++i) cin >> A[i];
    N = P = A;
    if(prev_permutation(N.begin(), N.end())) print(N);
    print(A);
    if(next_permutation(P.begin(), P.end())) print(P);
}


