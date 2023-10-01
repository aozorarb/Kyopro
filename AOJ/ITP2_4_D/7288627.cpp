#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> A;
    int a;
    int prev;
    for(int i=0;i<n;++i) {
        cin >> a;
        if(a != prev) A.push_back(a);
        prev = a;
    }
    for(int i=0;i<A.size();++i) cout << A[i] << " \n"[(i == A.size() -1)];
}

