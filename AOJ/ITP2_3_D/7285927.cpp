#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;++i) cin >> A[i];
    cin >> m;
    vector<int> B(m);
    for(int i=0;i<m;++i) cin >> B[i];
    int size = n;
    if(n < m) size = m;
    int ans = 0;
    for(int i=0;i<size;++i) {
        if(i < n && i < m) {
            if(A[i] < B[i]) { ans = 1; break; }    
            else if(A[i] > B[i]) break;
        } else if(i < n) {
            break;
        } else if(i < m) {
            ans = 1;
        }
    }
    cout << ans << endl;

}

