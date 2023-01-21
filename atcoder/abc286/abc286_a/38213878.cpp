// https://atcoder.jp/contests/abc286/tasks/abc286_a
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 int main() {
     int N, P, Q, R, S;
     cin >> N >> P >> Q >> R >> S;
     vector<int> A(N);
     for(int i=0;i<N;++i) cin >> A[i];
     swap_ranges(A.begin()+P-1, A.begin()+Q, A.begin()+R-1);
     for(auto i=A.begin();i!=A.end();++i) cout << *i << " \n"[(i == (A.end() -1))];
 }
