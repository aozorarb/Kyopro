#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > P(n);
    for(int i=0;i<n;++i) cin >> P[i].first >> P[i].second;
    sort(P.begin(), P.end());
    for(int i=0;i<n;++i) cout << P[i].first << " " << P[i].second << endl;
}

