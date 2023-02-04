// https://atcoder.jp/contests/abc288/tasks/abc288_b
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<string> name(N);
    for(int i=0;i<N;++i) cin >> name[i];
    sort(name.begin(), name.begin() + K);
    for(int i=0;i<K;++i) cout << name[i] << endl;
}

