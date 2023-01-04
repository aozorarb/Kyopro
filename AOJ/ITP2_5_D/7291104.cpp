#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V;
    for(int i=1;i<=n;++i) {
        V.push_back(i);
    }
    do {
        for(int i=0;i<n;++i) cout << V[i] << " \n"[(i == n - 1)];
    } while(next_permutation(V.begin(), V.end()));
}

