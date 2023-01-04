#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<tuple<int, int, char, long long int, string> > Item(n);
    for(int i=0;i<n;++i) cin >> get<0>(Item[i]) >> get<1>(Item[i]) >> get<2>(Item[i]) >> get<3>(Item[i]) >> get<4>(Item[i]);
    sort(Item.begin(), Item.end());
    for(int i=0;i<n;++i) printf("%d %d %c %lld %s\n", get<0>(Item[i]), get<1>(Item[i]), get<2>(Item[i]), get<3>(Item[i]), get<4>(Item[i]).c_str());
}

