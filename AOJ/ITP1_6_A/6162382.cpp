#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin >> ar.at(i);
    for(int i=0;(i<n/2);i++)swap(ar[i], ar[ar.size() - 1 - i]);
    for(int i= 0;i<n;i++){
        if (i != (ar.size() - 1))cout << ar.at(i) << ' ';
        else cout << ar.at(i) << endl;
    }
    
}
